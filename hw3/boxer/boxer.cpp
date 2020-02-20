#include<iostream>
using namespace std;
int main()
{
int x=1;
do{
string str;
cout<<"Enter a string: ";
cin>>str;
int size;
cout<<"Enter a size integer greater than or equal to one: ";
cin>>size;
while(size<=0)
{
cout<<"Please enter a size greater than or equal to one: ";
cin>>size;
}
for(int i=1;i<=size;i++)
{
for(int j=0;j<2*size+str.length();j++)
cout<<"*";
cout<<endl;

}
for(int i=0;i<size;i++)
cout<<"*";
cout<<str;
for(int i=0;i<size;i++)
cout<<"*";
cout<<endl;
for(int i=1;i<=size;i++)
{
for(int j=0;j<2*size+str.length();j++)
cout<<"*";
cout<<endl;

}
cout<<"Press 1 and enter to start making another box: ";
cin>>x;
}
while(ch==1);
return 0;

}
