#include <iostream>
using namespace std;

int main() 
{
    int c;
    cin >> c;
    while (c != 1) {
        cout << c << " ";
        if (c % 2 == 0) {
            c /= 2;
        } else {
            n = 3*c + 1;
        }
    }
    cout << "1" << endl;
    return 0;
}
