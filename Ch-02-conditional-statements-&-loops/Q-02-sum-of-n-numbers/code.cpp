#include <iostream>
using namespace std;

// Write a program to get the sum of n numbers as output.

int main() {
    
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum;
    return 0;
}

// Output:
// Enter your number: 5
// 15