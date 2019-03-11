//
//  VideoShow.cpp
//  OpencvLn
//
//  Created by FanYizhe on 2019/2/17.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//
#include <opencv2/opencv.hpp>
#include "VideoShow.hpp"
using namespace std;
using namespace cv;

VideoShow::VideoShow(string VideoName){
    namedWindow("Example3", WINDOW_AUTOSIZE);
    VideoCapture cap;
    if(VideoName=="camera"){
        cap.open(0);
    }
    else{
        cap.open(VideoName);
    }
    Mat frame;
    for (; ; ) {
        cap>>frame;
        GaussianBlur(frame, frame, Size(5,5), 3, 3);//添加视频滤镜
        if(frame.empty()){break;}
        imshow("Example3", frame);
        if(waitKey(33)>=0){break;} //此处33表示33毫秒，因为默认是30FPS播放速度，每两帧间隔33毫秒，在任意两帧之间都可以打断，但是此处并不能通过修改33来修改FPS，修改FPS涉及到VideoCapture
    }
    return;
}
