#include <iostream>
using namespace std;

// Write a program to get the sum of n odd numbers as output using for loop.

int main () {
    int N;
    cout << "Enter your number: ";
    cin >> N;
    int oddSum = 0;
    for(int i = 1; i <= N; i++) {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
    }
    cout << oddSum << endl;
    return 0;
}

// Output:
// Enter your number: 15
// 64