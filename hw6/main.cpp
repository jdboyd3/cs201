//
// main.cpp
//
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <vector>
#include"RandomBetween.hpp"


int main(int argc, const char * argv[])
{
std::random_device r;

// random
std::default_random_engine e1(r());
std::default_random_engine e3(r()+1);

std::uniform_int_distribution<int> uniform_dist(1, 5);
std::uniform_int_distribution<int> uniform_dist2(6, 10);
//int first = uniform_dist(e1);
//int last = uniform_dist2(e3);


//setting the range
int first = 1;
int last = 6;
std::seed_seq seed2{r(), r(), r(), r(), r(), r(), r(), r()};
std::mt19937 e2(seed2);


//normal histogram
std::map<int, int> normal;
for (int i = 0; i < 100000; i++)
{
++normal[RandomNormal(first, last, e2)];
}
std::cout << "Normal distribution between "<< first <<" and " << last << ":\n";
PrintDistribution(normal);


//uniform histogram
std::map<int, int> uniform;
for (int i = 0; i < 100000; i++)
{
++uniform[RandomUniform(first, last, e2)];
}
std::cout << "Uniform distribution between " << first << " and " << last << ":\n";
PrintDistribution(uniform);

//random histogram
std::map<int, int> rand;
for (int i = 0; i < 100000; i++)
{
++rand[RandomBetween(first, last)];
}
std::cout << "Random distribution between " << first << " and " << last << ":\n";
PrintDistribution(rand);

}
