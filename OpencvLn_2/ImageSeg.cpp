//
//  ImageSeg.cpp
//  OpencvLn_2
//
//  Created by FanYizhe on 2019/3/15.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "ImageSeg.hpp"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

void ImageSeg::fillWater(const cv::Mat &src, cv::Mat &dst){
    Mat grayImag;
    cvtColor(src, grayImag, CV_BGR2GRAY);
    dst.create(src.rows+2, src.cols+2, CV_8U);
    int flags = 4|(200<<8)|cv::FLOODFILL_FIXED_RANGE;
    Rect rec;
    floodFill(src, dst, Point(178, 819), 127, &rec, Scalar(20,20,20), Scalar(20,20,20), flags);
    imshow("AfterFill", src);
}
