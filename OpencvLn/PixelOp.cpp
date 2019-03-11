//
//  PixelOp.cpp
//  OpencvLn
//
//  Created by FanYizhe on 2019/2/18.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "PixelOp.hpp"
#include <opencv2/opencv.hpp>
#include "PixelOp.hpp"
using namespace cv;
using namespace std;

PixelOp::PixelOp(const Mat& image){
    int x = 16, y = 32;
    //取rgb图片某像素点的rgb
    Vec3b intensity = image.at<Vec3b>(y, x);
    unsigned int blue = (unsigned int)intensity[0];
    unsigned int green = (unsigned int)intensity[1];
    unsigned int red = (unsigned int)intensity[2];
    cout<<blue<<green<<red<<endl;
    
    //取gray图片某像素点的灰度
    Mat img_gry;
    cvtColor(image, img_gry, COLOR_BGRA2GRAY);
    unsigned int gray = (unsigned int)img_gry.at<uchar>(y,x);
    cout<<gray<<endl;
    
    //指定gray图片某点的灰度
    img_gry.at<uchar>(x,y) = 128;
    return;
}
