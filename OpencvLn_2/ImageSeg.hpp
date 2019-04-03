//
//  ImageSeg.hpp
//  OpencvLn_2
//
//  Created by FanYizhe on 2019/3/15.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#ifndef ImageSeg_hpp
#define ImageSeg_hpp
#include <opencv2/opencv.hpp>
#include <stdio.h>

class ImageSeg{
public:
    void fillWater(const cv::Mat& src, cv::Mat& dst);
};
#endif /* ImageSeg_hpp */
