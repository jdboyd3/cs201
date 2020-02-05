#include <iostream>
#include <string>
using namespace std;

int main()
{
int G=0; 
int i;
cout<<"Enter a sequence of positive integers, ending with zero. I will print the greatest positive number entered."<<endl;
cin >> i;

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

