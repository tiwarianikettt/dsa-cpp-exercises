#include <iostream>
using namespace std;

// Write a program for the number pattern where the number does not repeat itself.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num ++;
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter your number: 3
// 1 2 3 
// 4 5 6 
// 7 8 9 