#include <iostream>
#include <string>
using namespace std;

int main()
{
   int t,b,i;
    cout << "Input an integer greater than 0, that is how many lines will compose each half of your diamond"<<endl;
    cin >> i;
    if(i>=1)
    {
   for(t=0;t<=i;t++)
   {
     for(b=1; b<=i-t; b++)
     cout<<" ";
     for(b=1; b<=2*t-1; b++)
       cout<<"*";
     cout<<endl;
   }
   for(t=i-1; t>=1; t--)
   {
     for(b=1; b<=i-t; b++)
     cout<<" ";
     for(b=1; b<=2*t-1; b++)
       cout<<"*";
     cout<<endl;
   }
    }
    else{
        cout <<"Please enter an integer greater than 0"<<endl;
    }
}
