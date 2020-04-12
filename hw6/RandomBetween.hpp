//
// RandomBetween.hpp
//
#ifndef RandomBetween_hpp
#define RandomBetween_hpp

#include <stdio.h>
int RandomUniform(int first, int last, std::mt19937& e2);

int RandomNormal(int first, int last, std::mt19937& e2);

int RandomBetween(int first, int last);

void PrintDistribution(const std::map<int,int>& numbers);
#endif /* RandomBetween_hpp */
