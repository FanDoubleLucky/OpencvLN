//
//  HoughTrans.cpp
//  OpencvLn_2
//
//  Created by FanYizhe on 2019/3/15.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "HoughTrans.hpp"
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;


void HoughTrans::LineTrans(Mat& src, Mat& dst){
    Mat gray;
    cvtColor(src, gray, CV_BGR2GRAY);
    cv::threshold(gray, gray, 200, 255, cv::THRESH_BINARY);
    HoughLines(gray, dst, 0.5, 0.5, 200);
}

void HoughTrans::Circle(){
    
}
