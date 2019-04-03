//
//  Canny_Operator.hpp
//  OpencvLn_2
//
//  Created by FanYizhe on 2019/3/14.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#ifndef Edge_Detection_hpp
#define Edge_Detection_hpp

#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
class EdgeDetection{
public:
    EdgeDetection();
    virtual void detect(const Mat& src, Mat& dst);
};

class CannyDetection: public EdgeDetection{
public:
    CannyDetection();
    
    /**
     OpenCV中的Canny检测

     @param src 输入图像
     @param dst 输出图像
     */
    void detect(const Mat& src, Mat& dst);
    
    
    /**
     手动实现Canny

     @param src 输入
     @param dst 输出
     */
    void diyCanny(const Mat& src, Mat& dst);
    
    /**
     非极大值抑制

     @param src src description
     @param dst dst description
     */
    void nms(Mat& src, Mat& dst);
    
    
    /**
     双阈值抑制

     @param sobel_x sobel x方向求导的结果
     @param soble_y sobel y方向求导的结果
     @param dst dst description
     */
    void twoThreshSuppress(Mat& sobel_x, Mat& sobel_y, Mat& dst);
    
    
    /**
     滞后边缘跟踪

     @param src src description
     @param dst dst description
     */
    void trackSupress(Mat& src, Mat& dst);
};
#endif
