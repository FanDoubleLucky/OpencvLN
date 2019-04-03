//
//  HoughTrans.hpp
//  OpencvLn_2
//
//  Created by FanYizhe on 2019/3/15.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#ifndef HoughTrans_hpp
#define HoughTrans_hpp
#include <opencv2/opencv.hpp>
#include <stdio.h>

using namespace std;
using namespace cv;

class HoughTrans{
public:
    void LineTrans(Mat& src, Mat& dst);
    void Circle();
};

#endif /* HoughTrans_hpp */
