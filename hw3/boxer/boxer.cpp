/* boxer.hpp
 * 
 * Jakobe Boyd
 *
 * 2/19/2020
 *
 * CS 201X
 *
 * This program creates a box of varying size with a string in the middle based on user input
 */

#include<iostream>
using namespace std;
int main()
{
int x=1;
//do while so that the program continues running
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

}// asterisks
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

} // once the user has input their initial string and box size, the code below keeps the program running for more inputs
cout<<"Press 1 and enter to start making another box, press any other key and enter to quit: ";
cin>>x;
}
while(x==1);
return 0;

}
