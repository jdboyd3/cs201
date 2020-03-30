/**
 * @file     floating_point.cpp
 * @author   Jakobe Boyd
 * @version  Mar 1, 2019
 * John Quan 
 *
 * Useful trigonometric functions.
 */

// using M_PI for pi
#define _USE_MATH_DEFINES
#include <cmath>
#include<iomanip>
#include <vector>

std::vector<double> degreesToRadians(int degrees) {

	std::vector<double> radians;

	// for each degree, fill the vector with its radian
	for (int degree = 0; degree <= degrees; ++degree) {
		// TODO: calculate a radian and add it to the vector****************
		double r=(degree*M_PI)/180.0;
		radians.push_back(r);

		// *****************************************************************
	}
	return radians;
}





