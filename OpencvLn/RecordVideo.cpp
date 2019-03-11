//
//  RecordVideo.cpp
//  OpencvLn
//
//  Created by FanYizhe on 2019/2/18.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include "RecordVideo.hpp"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

RecordVideo::RecordVideo(string VideoName, string RecordFile){
    namedWindow("Example", WINDOW_AUTOSIZE);
    namedWindow("Polar", WINDOW_AUTOSIZE);
    VideoCapture cp;
    cp.open(0);
    double fps = cp.get(CAP_PROP_FPS);
    Size size(
              (int)cp.get(CAP_PROP_FRAME_WIDTH),
              (int)cp.get(CAP_PROP_FRAME_HEIGHT)
              );
    VideoWriter vw;
    vw.open(RecordFile, CV_FOURCC('M', 'P', '4', 'V'), fps, size);
    Mat bgr_frame, polar_frame;
    for(;;){
        cp>>bgr_frame;
        imshow("Example", bgr_frame);
        logPolar(bgr_frame, polar_frame, Point2f(
                 bgr_frame.cols/2, bgr_frame.rows/2), 40, WARP_FILL_OUTLIERS);
        imshow("Polar", bgr_frame);
        vw<<bgr_frame;
        if(waitKey(33)>=0){break;}
    }
    cp.release();
    return;
}
