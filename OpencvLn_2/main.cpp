//
//  main.cpp
//  OpencvLn_2
//
//  Created by FanYizhe on 2019/3/14.
//  Copyright © 2019年 FanYizhe. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include "Edge_Detection.hpp"
#include "HoughTrans.hpp"
#include "ImageSeg.hpp"
using namespace cv;
using namespace std;

void swap(vector<int> &array, int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}


void reOrderArray(vector<int> &array) {
    int n = array.size();
    int even = -1, odd = n;
    while(true){
        while(even<odd){
            if(array[++even]%2==1){
                break;
            }
        }
        while(even<odd){
            if(array[--odd]%2==0){
                break;
            }
        }
        if(even>=odd){
            break;
        }
        swap(array, even, odd);
    }
}




int main(int argc, const char * argv[]) {
    // insert code here...
    string imageName = "/Users/fyz/Desktop/opencv/OpencvLn/OpencvLn_2/CR.jpg";
    Mat image = cv::imread(imageName);
    Mat dst;
    
//    EdgeDetection ed;
//    ed.detect(image, dst);
//    CannyDetection canny;
//    canny.detect(image, dst);
    
//    HoughTrans ht;
//    ht.LineTrans(image, dst);
//    cout<<dst.size<<endl;
    
    
    
//    int* p;
//    int a=99;
//    p = &a;
//    cout<<p<<endl;//p指向的地址
//    cout<<*p<<endl;//p指向的对象a
//    cout<<&p<<endl;//同时p也是 一个变量，在内存中也有一个地址储存它，但其地址不是a的地址
//    cout<<p[0]<<endl;//a
//    cout<<&p[0]<<endl;//=p指向的地址
    
    
//    ImageSeg IS;
//    IS.fillWater(image, dst);
//    waitKey(0);
    vector<int> in = {1,2,3,4,5,6,7};
    reOrderArray(in);
    for (auto i:in) {
        cout<<i<<endl;
    }
    std::cout << "Hello, World!\n";
    return 0;
}
