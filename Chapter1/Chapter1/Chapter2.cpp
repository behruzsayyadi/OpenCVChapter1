#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


void toRawMatrices(unsigned char** redMatrix, unsigned char** greenMatrix, unsigned char** blueMatrix, Mat image)
{
    for (int i = 0; i < image.rows; i++) {
        for (int j = 0; j < image.cols; j++) {
            Vec3b pixel = image.at<Vec3b>(i, j);

            redMatrix[i][j] = pixel[2];
            greenMatrix[i][j] = pixel[1];
            blueMatrix[i][j] = pixel[0];
        }
    }
}

int main(int argc, char** argv)
{
    Mat image;
    image = imread("Resources/behruz.jpg", IMREAD_COLOR);

    if (!image.data) {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    Mat raw_image(image.rows, image.cols, CV_8UC3);
    int index = 0;
    
    unsigned char** redMatrix = new unsigned char* [image.rows];
    unsigned char** blueMatrix = new unsigned char* [image.rows];
    unsigned char** greenMatrix = new unsigned char* [image.rows];
    unsigned char** grayMatrix = new unsigned char* [image.rows];


    for (int i = 0; i < image.rows; ++i)
        redMatrix[i] = new unsigned char[image.cols];
    for (int i = 0; i < image.rows; ++i)
        blueMatrix[i] = new unsigned char[image.cols];
    for (int i = 0; i < image.rows; ++i)
        greenMatrix[i] = new unsigned char[image.cols];
    for (int i = 0; i < image.rows; ++i)
        grayMatrix[i] = new unsigned char[image.cols];

    toRawMatrices(redMatrix,greenMatrix,blueMatrix,image);
    
    for (int i = 0; i < image.rows; i++) {
        for (int j = 0; j < image.cols; j++) {
            grayMatrix[i][j] = (redMatrix[i][j] + greenMatrix[i][j] + blueMatrix[i][j])/3;
        }
    }
    

    for (int i = 0; i < image.rows; i++)
    {
        for (int j = 0; j < image.cols; j++)
        {
            raw_image.at<Vec3b>(i, j)[0] = grayMatrix[i][j];
            raw_image.at<Vec3b>(i, j)[1] = grayMatrix[i][j];
            raw_image.at<Vec3b>(i, j)[2] = grayMatrix[i][j];
        }
    }
    imshow("image", raw_image);
    waitKey(0);
    imwrite("Resources/behruz_gray.jpg", raw_image);

    delete[] redMatrix;
    delete[] blueMatrix;
    delete[] greenMatrix;

    return 0;
}