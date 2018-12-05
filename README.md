# CarND-Unscented-Kalman-Filter-Project
Implementation of Unscented Kalman Filter project

This repository contains code and other files required as part of the Unscented Kalman Filter project of the Self Driving Engineer Term 2 course.
The code changes were made to the following 2 files:
* tools.cpp - RMSE and NormalizeAngle methods were implemented.
* ukf.cpp - Unscented Kalman filter initialization, predict and update methods were implemented for both Laser and Radar measurements.

The application can be compiled using:
* `mkdir build`
* `cd build && cmake ..`
* `make`
* `./UnscentedKF`
