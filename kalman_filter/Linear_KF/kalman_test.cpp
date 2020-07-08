#include <iostream>
#include "kalman_filter.h"
#include <Eigen/Dense>
#include <Eigen/Geometry>

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;


int main(){


    Eigen::VectorXf x0(2), z1(1);
    Eigen::MatrixXf P0(2,2),F(2,2), Q(2,2);
    Eigen::MatrixXf H(1,2);
    Eigen::MatrixXf  R(1,1);
    
    x0 << 0.0, 5.0;
    
    P0 << 0.01f, 0.0f,
          0.0f, 1.0f;

    F << 1.0f, 0.5f,
         0.0f, 1.0f;
    
    Q << 0.1f, 0.0f,
         0.0f, 0.1f;

    H << 1.0f, 0.0f;
    R << 0.05f;
    z1 << 2.2;

    KalmanFilter kf(x0, F, P0, Q, H, R);
    kf.KF_predict();
    kf.KF_update(z1);

    kf.print_states();

   



    
    



    return 0;
}