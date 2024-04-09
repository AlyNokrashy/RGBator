#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QDir>
#include "Image_Class.h"
#include <bits/stdc++.h>
#include <QButtonGroup>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->filterApply->hide();
    ui->sliderText->hide();
    ui->sliderValue->hide();
    ui->filterSlider->hide();
    ui->progressLabel->hide();
    ui->dimnsLabel->hide();
    ui->widthEditVal->hide();
    ui->heightEditVal->hide();
    ui->heightLabel->hide();
    ui->widthLabel->hide();
    ui->resizeFilterBtn->hide();
    ui->resizeRatio->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}


// Some Globals;
Image orImg;
Image currImg;
string tempPath = "-1";
QString QtempPath;
int labelWidth, labelHeight;
stack<Image> undoStack, redoStack;


//  Filters functions prototypes
void rotate90(Image &image);
void rotateI90(Image &image);
void invert_color(Image& image);
void sunlight_filter(Image& image, int sunStrength);
void blur_filter(Image& image, int blurStr);
void purple_filter(Image& image);
void oilPainting_filter(Image& image, int strength);
void resize_image(Image& image, int newHeight);
void resize_image(Image& image, int newHeight, int newWidth);

//  other functions prototpyes
void clear_redo_stack();
void clear_undo_stack();

void hide_others(string curr);
void show_sliderWidgets(bool);

//  File Events functions


//  Load image

void MainWindow::on_loadImgBtn_clicked()
{
    //  Open File Dialoge to load Image, With specified Extensions
    QString filter = "(*.jpg *.png *.bmp *.tga) ;; (*.jpg) ;; (*.png) ;; (*.bmp) ;; (*.tga)";
    QString filePath = QFileDialog::getOpenFileName(this, "load", "D:/academics/College/Level !/CS 112/GonnaShow/Gui Training/image_load_save_display/sample", filter);
    //  Displaying The image on Input and output Qlabels
    QPixmap img(filePath);
    labelWidth = ui ->inImg->width();
    labelHeight = ui -> inImg -> height();
    ui -> inImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    //  Initializing the Image for Image_class Libirary

    string orImgPath = filePath.toStdString();
    orImg.loadNewImage(orImgPath);

    //  Setting the Current Image
    int lastSlash = orImgPath.find_last_of("/\\");
    int dot = orImgPath.find_last_of('.');
    tempPath = orImgPath.substr(lastSlash+1, dot-(lastSlash+1))+".jpg";
    QtempPath = QString::fromStdString(tempPath);

    orImg.saveImage("original"+tempPath);
    orImg.loadNewImage("original"+tempPath);
    currImg = orImg;
    currImg.saveImage(tempPath);
    ui->widthEditVal->setText(QString::number(orImg.width));
    ui->heightEditVal->setText(QString::number(orImg.height));
    ui->dimnsLabel->show();
    ui->widthEditVal->show();
    ui->heightEditVal->show();
    ui->heightLabel->show();
    ui->widthLabel->show();
    //  clear_redo_stack();
    clear_redo_stack();
    clear_undo_stack();
}


//  Save Image


void MainWindow::on_saveImgBtn_clicked()
{
    // Check if the file exists before trying to copy it
    if (QFile::exists(QtempPath)) {
        QString fileName = QFileDialog::getSaveFileName(this, "Save Image", QDir::homePath(), "*.png ;; *.jpg ;; *.tga ;; *.bmp)");
        if (!fileName.isEmpty()) {
            // Copy the file to the chosen location
            QFile::copy(QtempPath, fileName);
        }
    }
}


//  Clear Image

void MainWindow::on_clearImg_clicked()
{
        if(tempPath!="-1"){
            currImg = orImg;
            currImg.saveImage(tempPath);
            QPixmap img = QPixmap(QtempPath);
            ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
            clear_redo_stack();
            clear_undo_stack();
        }
        hide_others();
}

//  Redo

void MainWindow::on_redoBtn_clicked()
{
    if(!redoStack.empty()){

        undoStack.push(currImg);
        currImg = redoStack.top();
        redoStack.pop();
        // Save current state for undo
        currImg.saveImage(tempPath);
        QPixmap img = QPixmap(QtempPath);
        ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    }
    hide_others();
}


//  undo


void MainWindow::on_undoBtn_clicked()
{

    if(!undoStack.empty()){
        redoStack.push(currImg); // Save current state for redo
        currImg = undoStack.top();
        undoStack.pop();
        currImg.saveImage(tempPath);
        QPixmap img = QPixmap(QtempPath);
        ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    }
    hide_others();
}


//  Filters Events


void MainWindow::on_rotateRight_clicked()
{

    redoStack.push(currImg);
    rotate90(currImg);
    clear_undo_stack();
    currImg.saveImage(tempPath);
    QPixmap img = QPixmap(QtempPath);
    ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    hide_others();
}


void MainWindow::on_rotateLeft_clicked()
{

    redoStack.push(currImg);
    rotateI90(currImg);
    clear_undo_stack();
    currImg.saveImage(tempPath);
    QPixmap img = QPixmap(QtempPath);
    ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    hide_others();
}


void MainWindow::on_invertFilter_clicked()
{
    hide_others();
    redoStack.push(currImg);
    invert_color(currImg);
    clear_undo_stack();
    currImg.saveImage(tempPath);
    QPixmap img = QPixmap(QtempPath);
    ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
}


void MainWindow::on_filterSlider_valueChanged(int value)
{
    ui -> sliderValue -> setText(QString::number(value));
}

void MainWindow::on_filterApply_clicked()
{
    ui->progressLabel->setText("In Progress...");
    ui->progressLabel->show();
    QApplication::processEvents();
    redoStack.push(currImg);
    int strength = ui->sliderValue->text().toInt();


    if(ui->sunLightFilter->isChecked()){
        sunlight_filter(currImg, strength);
    }
    else if(ui->blurFilter->isChecked()){
        int imgHeight= currImg.height;
        if(strength!=0){
            if(imgHeight>1000){
                resize_image(currImg, 720);
            }

            blur_filter(currImg, strength);

            if(imgHeight>1000){
                resize_image(currImg, imgHeight);
            }
        }

    }
    else if(ui->oilFilter->isChecked()){
        int imgHeight= currImg.height;
        if(strength!=0){
            if(imgHeight>1000){
                resize_image(currImg, 720);
            }

            oilPainting_filter(currImg, strength);

            if(imgHeight>1000){
                resize_image(currImg, imgHeight);
            }
        }
    }
    clear_undo_stack();
    currImg.saveImage(tempPath);
    QPixmap img = QPixmap(QtempPath);
    ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    ui->progressLabel->setText("Done !");
}

void MainWindow::on_sunLightFilter_clicked(bool checked)
{
    hide_others("sunLightFilter");
    show_sliderWidgets(checked);
}


void MainWindow::on_blurFilter_clicked(bool checked)
{
    hide_others("blurFilter");
    show_sliderWidgets(checked);
}
void MainWindow::on_oilFilter_clicked(bool checked)
{
    hide_others("oilFilter");
    show_sliderWidgets(checked);
}

void MainWindow::on_purpleFilter_clicked()
{
    hide_others();
    redoStack.push(currImg);
    purple_filter(currImg);
    clear_undo_stack();
    currImg.saveImage(tempPath);
    QPixmap img = QPixmap(QtempPath);
    ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
}

//  Other Functions Declaration
void clear_redo_stack(){
    while(!redoStack.empty()){
        redoStack.pop();
    }
}
void clear_undo_stack(){
    while(!undoStack.empty()){
        undoStack.pop();
    }
}
void MainWindow::hide_others(string curr){
    if(curr!="sunLightFilter"){
        ui->sunLightFilter->setChecked(false);
    }
    if(curr!="blurFilter"){
        ui->blurFilter->setChecked(false);
    }
    if(curr!="oilFilter"){
        ui->oilFilter->setChecked(false);
    }
        ui->filterApply->hide();
        ui->sliderText->hide();
        ui->sliderValue->hide();
        ui->filterSlider->hide();
        ui->progressLabel->hide();
        ui->heightEditVal->setText(QString::number(currImg.height));
        ui->widthEditVal->setText(QString::number(currImg.width));
        ui->resizeFilterBtn->hide();
        ui->resizeRatio->hide();
        ui->resizeRatio->setChecked(true);
}

void MainWindow::show_sliderWidgets(bool checked){
    if(checked){
        ui->filterApply->show();
        ui->sliderText->show();
        ui->sliderValue->show();
        ui->filterSlider->show();
    }else{
        ui->filterApply->hide();
        ui->sliderText->hide();
        ui->sliderValue->hide();
        ui->filterSlider->hide();
    }
}



//  Filter Functions Declaration

void rotate90(Image& image){
    Image newImage(image.height, image.width);
        //  rotate 90
    for (int i = 0; i < newImage.width; i++) {
        for (int j = 0; j < newImage.height; j++) {
            for (int k = 0; k < 3; k++) {
                newImage(i, j, k) = image(j, (newImage.width -1) - i , k);
            }
        }
    }
    image = newImage;
}
void rotateI90(Image& image){
    Image newImage(image.height, image.width);
    for (int i = 0; i < newImage.width; i++) {
        for (int j = 0; j < newImage.height; j++) {
            for(int k=0; k < 3;k++){
                newImage(i, j,k)=image((newImage.height - 1) -j, i, k);
            }
        }
    }
    image = newImage;
}
void invert_color(Image& image) {
    for(int i = 0; i < image.width ; i++) {
        for(int j = 0; j < image.height; j++) {
            for(int k = 0; k < 3; k++) {
                image(i, j, k) = 255 - image(i, j, k);
            }
        }
    }
}

void purple_filter(Image& image){
    int R, G, B;
    for(int i=0; i < image.width ; i++){
        for(int j=0; j < image.height ; j++){
            R= image(i, j ,0) +  255 * 0.627, G= image(i, j, 1) + 255 * 0.125, B= image(i, j, 2) + 255 * 0.941;
            if(R >255){
                R=255;
            }
            if(B>255){
                B=255;
            }
            if(G > 255){
                G=255;
            }
            image(i, j, 0) = R;
            image(i, j, 1) = G;
            image(i, j, 2) = B;
        }
    }
}



void sunlight_filter(Image& image, int sunStrength){
    int R,G;
    for(int i=0; i < image.width ; i++){
        for(int j=0; j < image.height ; j++){
            R= image(i,j,0) + sunStrength, G=image(i,j,1) + sunStrength;
            if(R >255){
                R=255;
            }
            if(G>255){
                G=255;
            }
            image(i, j, 0) = R;
            image(i, j, 1) = G;
            image(i, j, 2) = image(i,j,2);
        }
    }
}


void resize_image(Image& image, int newHeight) {
    float aspectRatio = static_cast<float>(image.width) / image.height;
    int newWidth = static_cast<int>(newHeight * aspectRatio);

    Image newImage(newWidth, newHeight);

    float xRatio = static_cast<float>(image.width - 1) / newWidth;
    float yRatio = static_cast<float>(image.height - 1) / newHeight;

    for (int i = 0; i < newWidth; i++) {
        for (int j = 0; j < newHeight; j++) {
            int x = static_cast<int>(xRatio * i);
            int y = static_cast<int>(yRatio * j);
            newImage(i, j, 0) = image(x, y, 0);
            newImage(i, j, 1) = image(x, y, 1);
            newImage(i, j, 2) = image(x, y, 2);
        }
    }

    image = newImage;
}


void resize_image(Image& image, int newHeight, int newWidth) {

    Image newImage(newWidth, newHeight);

    float xRatio = static_cast<float>(image.width - 1) / newWidth;
    float yRatio = static_cast<float>(image.height - 1) / newHeight;

    for (int i = 0; i < newWidth; i++) {
        for (int j = 0; j < newHeight; j++) {
            int x = static_cast<int>(xRatio * i);
            int y = static_cast<int>(yRatio * j);
            newImage(i, j, 0) = image(x, y, 0);
            newImage(i, j, 1) = image(x, y, 1);
            newImage(i, j, 2) = image(x, y, 2);
        }
    }

    image = newImage;
}


void blur_filter(Image& image, int blurStr) {
    Image newImage(image.width, image.height);
    int kernelSize = 21.0 * blurStr/100.0;

    if (kernelSize < 3){
        kernelSize = 3;
    }

    for (int i = 0; i < image.width; i++) {
        for (int j = 0; j < image.height; j++) {
            int avgR = 0;
            int avgG = 0;
            int avgB = 0;
            int count = 0;

            // Iterate over the kernel centered at pixel (i, j)
            for (int a = i - (kernelSize - 1) / 2; a <= i + (kernelSize - 1) / 2; a++) {
                for (int b = j - (kernelSize - 1) / 2; b <= j + (kernelSize - 1) / 2; b++) {
                    // Check if the current pixel is within the image boundaries
                    if (a >= 0 && a < image.width && b >= 0 && b < image.height) {
                        avgR += image(a, b, 0);
                        avgG += image(a, b, 1);
                        avgB += image(a, b, 2);
                        count++;
                    }
                }
            }

            // Calculate average color values
            avgR /= count;
            avgG /= count;
            avgB /= count;

            // Assign the average color to the corresponding pixel in the new image
            newImage(i, j, 0) = avgR;
            newImage(i, j, 1) = avgG;
            newImage(i, j, 2) = avgB;

        }
    }

    // Update the original image with the blurred image
    image = newImage;
}

void oilPainting_filter(Image& image, int strength){
    Image newImage(image.width, image.height);

    int KernelSize= 10.0 * static_cast<double>(strength)/100.0;
    double IntensityLevel= 20.0;
    if(KernelSize<3){
        return;
    }

    for(int i=0; i < image.width ; i++){
        for(int j=0; j < image.height ; j++){

            vector<int> frequencyLevels(IntensityLevel+1,0);
            vector<int> r_pixels(IntensityLevel+1,0);
            vector<int> g_pixels(IntensityLevel+1,0);
            vector<int> b_pixels(IntensityLevel+1,0);

            //  Kernel loop to find most frequent color
            for(int a= i - (KernelSize -1)/2; a <= i + (KernelSize+1) / 2 ; a++){
                for(int b = j -(KernelSize -1)/2 ; b <= j + (KernelSize+1) / 2; b++){
                    if(a>= 0 && b >=0 && a < image.width && b < image.height){
                        float avgPixel = 0;
                        for(int k=0;k<3;k++){
                            avgPixel+=image(a, b, k);
                        }
                        avgPixel/=3.0;
                        int currIntensity = avgPixel*IntensityLevel/255.0f;
                        frequencyLevels[currIntensity]++;
                        r_pixels[currIntensity] += image(a,b,0);
                        g_pixels[currIntensity] += image(a,b,1);
                        b_pixels[currIntensity] += image(a,b,2);
                    }
                }
            }
            int max_index=0;
            int freq_max= frequencyLevels[0];
            for(int i=0;i<IntensityLevel+1;i++){
                if(freq_max<frequencyLevels[i]){
                    freq_max=frequencyLevels[i];
                    max_index=i;
                }
            }
            newImage(i,j,0) = r_pixels[max_index]/freq_max;
            newImage(i,j,1) = g_pixels[max_index]/freq_max;
            newImage(i,j,2) = b_pixels[max_index]/freq_max;
        }
    }
    image =newImage;
}




void MainWindow::on_resizeFilterBtn_clicked()
{
    redoStack.push(currImg);
    int newHeight = ui->heightEditVal->text().toInt();
    int newWidth = ui->widthEditVal->text().toInt();
    resize_image(currImg, newHeight, newWidth);

    clear_undo_stack();
    currImg.saveImage(tempPath);
    QPixmap img = QPixmap(QtempPath);
    ui -> outImg ->setPixmap(img.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio));
    hide_others();
}


void MainWindow::on_widthEditVal_textEdited(const QString &arg1)
{
    ui->resizeFilterBtn->show();
    ui->resizeRatio->show();
    if(ui->resizeRatio->isChecked()){
        int width =ui->widthEditVal->text().toInt();
        float aspectRatio = static_cast<float>(currImg.height) / currImg.width;
        int newHeight = static_cast<int>(width * aspectRatio);


        ui->heightEditVal->setText(QString::number(newHeight));
    }
}


void MainWindow::on_heightEditVal_textEdited(const QString &arg1)
{
    ui->resizeFilterBtn->show();
}
