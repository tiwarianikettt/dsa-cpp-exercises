#include <iostream>
using namespace std;

// Write a program to get the alphabetical square pattern of n numbers as output.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch='A';
        for (int j = 0; j < n; j++) {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter your number: 5
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE