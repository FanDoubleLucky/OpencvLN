//
//  main.cpp
//  OpencvLn
//
//  Created by FanYizhe on 2019/2/17.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include "ImageShow.hpp"
#include "VideoShow.hpp"
#include "SimpleTrans.hpp"
#include "GaussianSimple.hpp"
#include "PixelOp.hpp"
#include "RecordVideo.hpp"
using namespace std;


int ValueMin(vector<vector<int>> M){
    int m = M.size();
    int n = M[0].size();
    int total= 0;
    for(int i = 0;i<m;i++){
        for(int j = i+1;j<m;j++){
                int count = 0;
                for(int k = 0;k<n;k++){
                    if(M[i][k]==M[j][k]&&M[i][k]==1){
                        count++;
                    }
                    
                }
                total+=count*(count-1)/2;
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = i+1;j<m;j++){
            int count = 0;
            for(int k = 0;k<n;k++){
                if(M[i][k]==M[j][k]&&M[i][k]==0){
                    count++;
                    cout<<i<<j<<k<<endl;
                }
                
            }
            total+=count*(count-1)/2;
        }
    }
    return total;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::string imageName = "/Users/fyz/Desktop/opencv-test/opencv-test/300.jpg";
    cv::Mat image = cv::imread(imageName);
    cout<<image.channels()<<endl;
    cout<<image.type()<<endl;
    //ImageShow* is = new ImageShow("/Users/fyz/Desktop/opencv-test/opencv-test/30.jpg");
    //VideoShow* vs = new VideoShow("/Users/fyz/Downloads/video/[HYSUBxTNH]Netsuzou TRap[12][GB_MP4][1280X720].mp4");
    
    //SimpleTrans* st = new SimpleTrans(image);
    //GaussianSimple* gs = new GaussianSimple(image);
    //PixelOp* op = new PixelOp(image);
    //VideoShow* vs = new VideoShow("camera");
//    RecordVideo rv("/Users/fyz/Downloads/video/[HYSUBxTNH]Netsuzou TRap[12][GB_MP4][1280X720].mp4","/Users/fyz/Desktop/opencv/OpencvLn/OpencvLn/1.mp4");
    cout<<image.at<Vec3b>(2,0)<<endl;
    
    vector<int> dp(10, 0);
    //std::cout << "Hello, World!\n";
    vector<vector<int>> sum(10, vector<int>(9, 0));
    cout<<sum.size()<<endl;
    string a;
    cout<<a<<endl;
    Mat M, N;
    M.create(6, 6, CV_32SC1);
    int po = 78;
    M.setTo(po);
    //M.at<int>(5, 5) = 123;
    N.create(6, 6, CV_8UC1);
    N.setTo(0);
    N.at<uchar>(5, 5) = 123;
    M.setTo(65, N);
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<"M: "<<M.at<int>(i, j)<<endl;
        }
    }
    return 0;
}


