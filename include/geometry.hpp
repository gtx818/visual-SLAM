//
// Created by gtx on 2021/6/15.
//

#ifndef VISUAL_SLAM_GEOMETRY_HPP
#define VISUAL_SLAM_GEOMETRY_HPP

#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include <eigen3/Eigen/Core>

using namespace std;
using namespace cv;
using namespace Eigen;

namespace gtx_slam {
    class GeometryUndistorter {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW;

        GeometryUndistorter(string &path);

        void processFrame(Mat &src, Mat dst);

    private:
        int w_, h_, w_rect_, h_rect_;
        Eigen::Matrix3d K_, K_rect_;
        float k1_, k2_, k3_, k4_;   // for Equid
        float omega_;   // for FoV
        vector<Vector2f> remap_;

        bool crop;

        void makeOptimalK_crop();

        void initRectifyMap();

        void distortCoordinates(vector<Vector2f> &in);
    };
}

#endif //VISUAL_SLAM_GEOMETRY_HPP
