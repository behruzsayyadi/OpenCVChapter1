#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


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
    
    unsigned char** redMatrix = new unsigned char* [image.rows/3];
    unsigned char** blueMatrix = new unsigned char* [image.rows/3];
    unsigned char** greenMatrix = new unsigned char* [image.rows/3];

    for (int i = 0; i < image.rows/3; ++i)
        redMatrix[i] = new unsigned char[image.cols/3];
    for (int i = 0; i < image.rows/3; ++i)
        blueMatrix[i] = new unsigned char[image.cols/3];
    for (int i = 0; i < image.rows/3; ++i)
        greenMatrix[i] = new unsigned char[image.cols/3];
   
    for (int i = 0; i < image.rows; i+3) {
        for (int j = 0; j < image.cols; j+=3) {
            Vec3b pixel = image.at<Vec3b>(i, j);

            redMatrix[i][j] = pixel[2];
            greenMatrix[i][j] = pixel[1];
            blueMatrix[i][j] = pixel[0];
        }
    }

    for (int i = 0; i < image.rows/3; i++)
    {
        for (int j = 0; j < image.cols/3; j++)
        {
            raw_image.at<Vec3b>(i, j)[0] = blueMatrix[i][j];
            raw_image.at<Vec3b>(i, j)[1] = greenMatrix[i][j];
            raw_image.at<Vec3b>(i, j)[2] = redMatrix[i][j];
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