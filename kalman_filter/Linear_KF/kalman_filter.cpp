#include <iostream>
#include <Eigen/Dense>
#include "kalman_filter.h"


using namespace std;
using Eigen::MatrixXf;
using Eigen::VectorXf;

KalmanFilter::KalmanFilter(){}
KalmanFilter::KalmanFilter(VectorXf &x, MatrixXf &F, MatrixXf &P,
                           MatrixXf &Q, MatrixXf &H, MatrixXf &R){
                            
    x_ = x;
    F_ = F;
    P_ = P;
    Q_ = Q;
    H_ = H;
    R_ = R;
    
}
KalmanFilter::~KalmanFilter(){}

void KalmanFilter::KF_predict(){

    MatrixXf Ft = F_.transpose();
    
    // State prediction
    x_ = F_ * x_;

    // Covariance matrix prediction update
    P_ = (F_ * P_ * Ft) + Q_;

}

void KalmanFilter::KF_update(const VectorXf &z){

    MatrixXf PHt = P_ * H_.transpose();
    MatrixXf Sk  = H_ * PHt + R_;

    VectorXf Vk  = z - H_ * x_;
    MatrixXf K   = PHt * Sk.inverse();
    
    x_ = x_ + K * Vk;
    P_ = P_ - K * Sk * K.transpose();

}






