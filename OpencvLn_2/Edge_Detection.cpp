//
//  Canny_Operator.cpp
//  OpencvLn_2
//
//  Created by FanYizhe on 2019/3/14.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "Edge_Detection.hpp"
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
EdgeDetection::EdgeDetection(){}

void EdgeDetection::detect(const Mat &src, Mat &dst){
    Mat gray;
    cout<<"ED"<<endl;
    cvtColor(src, gray, CV_BGR2GRAY);
//    Sobel(gray, dst, CV_32F, 1, 1);
    Laplacian(gray, dst, CV_32F);
    imshow("SObel_1_0", dst);
    return;
}

CannyDetection::CannyDetection(){}

void CannyDetection::detect(const Mat& src, Mat& dst){
    Mat gray;
    cout<<"ED"<<endl;
    cvtColor(src, gray, CV_BGRA2GRAY);
    Canny(gray, dst, 40, 100);
    imshow("SObel_1_1", dst);
    return;
}

void CannyDetection::diyCanny(const Mat& src, Mat& dst){
    
}

void CannyDetection::nms(Mat& src, Mat& dst){
    
}

void CannyDetection::twoThreshSuppress(Mat& sobel_x, Mat& sobel_y, Mat& dst){
    
}

void CannyDetection::trackSupress(Mat& src, Mat& dst){
    
}
