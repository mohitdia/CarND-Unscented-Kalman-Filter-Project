#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {
  /**
  TODO:
    * Calculate the RMSE here.
  */
 VectorXd rmse(4);
 
 //Initialize rmse vector
 rmse << 0,0,0,0;

//  std::cout << "Estimations size: " << estimations.size() << std::endl;
//  std::cout << "Ground truth size: " << ground_truth.size() << std::endl;
 
 if (estimations.size() == 0 || (estimations.size() != ground_truth.size())) {
   cout << "Estimations vector size cannot be zero or estimations and ground truth should be of the same size";
   return rmse;
 }

 //accumulate squared residuals
  for(unsigned int i=0; i < estimations.size(); ++i){
    VectorXd residual = estimations[i] - ground_truth[i];

    //coefficient-wise multiplication
    residual = residual.array()*residual.array();
    rmse += residual;
  }

  //calculate the mean
  rmse = rmse/estimations.size();

  //calculate the squared root
  rmse = rmse.array().sqrt();

  //return the result
  return rmse;

}