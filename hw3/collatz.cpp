// Jakobe Boyd
// CS 201X
//2/19/20
//This program computes the collatz conjecture given user input

#include <iostream>
using namespace std;

int main() {
    bool again;
do {
    int n;
    cin >> n;


if (n>=1)
{
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3*n + 1;
        }
    }
    cout << "1" << endl;
    return 0;
}

else
{
    again=1;
    cout << "Please enter a positive integer."<<endl;
}
}
while (again == 1);
}
