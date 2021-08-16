//
// Created by gtx on 2021/6/15.
//

#ifndef VISUAL_SLAM_PHOTOMETRIC_HPP
#define VISUAL_SLAM_PHOTOMETRIC_HPP

#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include <eigen3/Eigen/Core>

using namespace cv;
using namespace std;
using namespace Eigen;

namespace gtx_slam{
    class PhotometricUndistorter{
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW;
        PhotometricUndistorter(string &path);

        void processFrame(Mat& image);

    private:
        vector<float> G_;
        int G_depth_;
        Mat vignette_;
        Mat vignette_inv_;
        int w_, h_;
    };
}

#endif //VISUAL_SLAM_PHOTOMETRIC_HPP
