// Jakobe Boyd
// CS 201X
//2/5/20
//This function accepts a value and converts it from miles to kilometers


#include <iostream>
#include <string>
using namespace std;

int main()
{
cout<<"Input a number to be converted from miles to kilometers."<<endl;
int mile_input; //user input
float kilometer=1.609; //value used to multiply user input by and get conversion
cin>>mile_input;
cout<<mile_input <<" mile(s) is equivalent to "<<kilometer*mile_input<<" kilometer(s)."<<endl;
return 0;
}

