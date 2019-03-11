//
//  ImageShow.cpp
//  OpencvLn
//
//  Created by FanYizhe on 2019/2/17.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "ImageShow.hpp"
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

ImageShow::ImageShow(string ImageName){
    Mat img = imread(ImageName);
    namedWindow("Example1", WINDOW_AUTOSIZE);
    imshow("Example1", img);
    waitKey(0);
    destroyWindow("Example1");
    return;
}
