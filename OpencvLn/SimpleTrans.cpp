//
//  SimpleTrans.cpp
//  OpencvLn
//
//  Created by FanYizhe on 2019/2/17.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "SimpleTrans.hpp"
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

SimpleTrans::SimpleTrans(const Mat& image){
    namedWindow("Example2_in", WINDOW_AUTOSIZE);
    namedWindow("Example2_out", WINDOW_AUTOSIZE);
    
    imshow("Example2_in", image);
    
    Mat out;
    
    //Could use GaussianBlur(), blur(), mediaBlur(), bilateralFilter();
    GaussianBlur(image, out, Size(5,5), 3, 3);
    GaussianBlur(out, out, Size(5,5), 3, 3);
    
    imshow("Example2_out", out);
    waitKey(0);
    return;
}
