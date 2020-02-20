// Jakobe Boyd
// CS 201X
//2/19/20
//This program is a corrected version of an erroneous celsius to kelvin calculator


#include <iostream>
#include <string>
using namespace std;


double ctok(double c)
{
    double k = c + 273.15; // k should be float instead of int to prevent truncation, changed 'int k = c + 273.15' to 'double k = c +273.15'
    return k; // return should be reutrning a value, so changed 'return int' to 'return k'
}

int main()
{
    double c = 0;
    cin>>c; //d is a misinput, it should be c, changed 'cin>>d' to 'cin>>c'
    if(c>=-273.15)
    {
        
    double k =ctok(c);  // want to call the value c, not string "c", changed 'double k =ctok("c")'' to 'double k =ctok(c)'
    cout<<k<< '/n' ; //cout shouldnt be capitalized
    }
    else
    {
        cout<<"Please enter a value greater than or equal to -273.15"<<endl;
    }
return 0;
}
