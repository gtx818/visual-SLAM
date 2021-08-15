//
// Created by gtx on 2021/6/15.
//
#include "geometry.hpp"
#include "photometric.hpp"

#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char **argv) {
    if (argc < 2) {
        cout << "ERROR: Wrong num of parameters" << endl;
    }
    // root path for images
    string path = argv[1];
    string data_path;

    if (path.find_last_of("/") != path.size() - 1) {
        data_path = path + "/";
    }

    cv::Mat img = cv::imread(data_path+"1.png",cv::IMREAD_UNCHANGED);
    assert(img.data);


}

