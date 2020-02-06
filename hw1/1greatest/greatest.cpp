// Jakobe Boyd
// CS 201X
//2/5/20
//This function accepts a series of positive integers and prints out the greatest value entered

#include <iostream>
#include <string>
using namespace std;

int main()
{
int G=0; //greatest value
int i; //user input
cout<<"Enter a sequence of positive integers, ending with zero. I will print the greatest positive number entered."<<endl;
cin >> i;

//function that sets greatest input above 1 to G/greatest
if(i>=1){
while(i>=1){
cin >> i;
  if(i>G)
  {
  G=i;
  }
}
cout <<"Your greatest input was: " <<G<< endl;
}

else{
    cout<<"No positive integers were entered"<<endl;
}
return 0;
}

