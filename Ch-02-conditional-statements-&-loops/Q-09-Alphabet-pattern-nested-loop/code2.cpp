#include <iostream>
using namespace std;

// Write a program to get the alphabetical square pattern of n numbers
// but the alphabets should not repeat them selves as output.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
    
}

// Output:
// Enter your number: 3
// A B C 
// D E F 
// G H I 