//
// Created by asus on 2018/8/21.
//
#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_asus_demondk_12_MainActivity_gray(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Gray";
    return env->NewStringUTF(hello.c_str());
}