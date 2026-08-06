#include <iostream>
using namespace std;

// Write a program to get the sum of n odd numbers as output using while loop.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int oddSum = 0;
    int i = 1;

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
        i++;
    }

    cout << oddSum << endl;
    return 0;
}

// Output:
// Enter your number: 30
// 225