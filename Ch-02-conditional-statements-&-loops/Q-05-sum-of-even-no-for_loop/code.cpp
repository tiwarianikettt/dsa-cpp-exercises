#include <iostream>
using namespace std;

// Write a program to get the sum of n even numbers as output.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int evenSum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;            
        }
    }
    cout << evenSum << endl;
}

// Output:
// Enter your number: 20
// 110