
#ifndef KALMAN_FILTER_H
#define KALMAN_FILTER_H

#include <Eigen/Dense>
#include <Eigen/Geometry>

using Eigen::VectorXf;
using Eigen::MatrixXf;
using namespace std;

class KalmanFilter{
    public:

        VectorXf x_;
        MatrixXf P_;
        MatrixXf F_;
        MatrixXf Q_;
        MatrixXf R_;
        MatrixXf H_;

        KalmanFilter();
        KalmanFilter(VectorXf &x, MatrixXf &F, MatrixXf &P,
                     MatrixXf &Q, MatrixXf &H, MatrixXf &R);
        ~KalmanFilter();

        void KF_predict();
        void KF_update(const VectorXf &z);

        void print_states(){
            cout << "xk " << endl;
            cout << x_ << endl;

            cout <<"Pk " << endl;
            cout << P_ << endl;
        }

};


#endif