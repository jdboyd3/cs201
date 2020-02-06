// Jakobe Boyd
// CS 201X
//2/5/20
//This function prints a diamond based on the value input by the user

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int t,b,i; // t is top half of diamond, b is bottom half of diamond, and i is the value input by user
    cout << "Input an integer greater than 0, that is how many lines will compose each half of your diamond"<<endl;
    cin >> i;
    if(i>=1) // value input must be greater or equal to 1, so will only move to main function if so
    {
   for(t=0;t<=i;t++) //top
   {
     for(b=1; b<=i-t; b++)
     cout<<" ";
     for(b=1; b<=2*t-1; b++)
       cout<<"*";
     cout<<endl;
   }
   for(t=i-1; t>=1; t--) //bottom
   {
     for(b=1; b<=i-t; b++)
     cout<<" ";
     for(b=1; b<=2*t-1; b++)
       cout<<"*";
     cout<<endl;
   }
    }
    else{ //if user input is less than 1
        cout <<"Please enter an integer greater than 0"<<endl;
    }
}
