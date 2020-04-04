#include <iostream>
#include "truncstruct.hpp"
using namespace std;
int main()
{
string inputstr;
while(1)
{
cout << "Enter a string: ";
cin >> inputstr;
StringInfo userString = trunc8(inputstr);
cout << "Content from trunc8" << endl;
cout << "String : " << userString.str << endl;
cout << "Length: " << userString.len << endl;
cout << "Do you want to continue? y/n : ";
string choice;
cin >> choice;
if(choice != "y"){
break;
}
}
return 0;
}
