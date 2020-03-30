**
 * @file     L19_Floating_Point.cpp
 * @author   Jakobe Boyd
 * @version  Jan 28, 2019
 * John Quan 
 *
 * Useful trigonometric functions.
 */

#include <iostream>
#include <vector>
#include<iomanip>
// using sin, cos
#include <cmath>
using namespace std;
#include "floating_point.hpp"

int main() {
	std::vector<double> radians=degreesToRadians(360);
	cout<<"Degrees         Cos                     Sin"<<endl;
	//print the table in format degree, cos(radian), sin(radian)
	for(int i=0;i<radians.size();i++){
	cout<<left<<setw(3)<<left<<i<<"\t\t"<<setw(10)<<cos(radians[i])<<"\t\t"<<setw(10)<<sin(radians[i])<<endl;
	}
	return 0;
}







// TODO Turn on "error on warnings" so this doesn't*****************
	// compile.  Make it compile by using std::size_t
	// You can comment this for loop out after that.
	//std::vector<std::size_t> v {1, 2, 3, 4, 5};
	//for (std::size_t i = 2; i < v.size(); ++i) {
		//++v[i];
		//std::cout << v[i] << std::endl;
	//}
	//std::cout << std::endl << std::endl;
	// *****************************************************************

	// TODO Declare and initialize a vector of radians by calling*******
	//        degreesToRadians(360).
	//      Print degree,cos(radian),sin(radian) as a comma separated
	//        values (CSV) list.


	// *****************************************************************
