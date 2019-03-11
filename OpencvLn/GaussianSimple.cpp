//
//  GaussianSimple.cpp
//  OpencvLn
//
//  Created by FanYizhe on 2019/2/17.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "GaussianSimple.hpp"
#include "GaussianSimple.hpp"
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
GaussianSimple::GaussianSimple(const Mat& image){
    namedWindow("Example1", WINDOW_AUTOSIZE);
    namedWindow("Example2", WINDOW_AUTOSIZE);
    imshow("Example1", image);
    Mat out;
    pyrDown(image, out);
    imwrite("/Users/fyz/Desktop/opencv/OpencvLn/OpencvLn/Example2.jpg", out);
    waitKey(0);
    return;
}
