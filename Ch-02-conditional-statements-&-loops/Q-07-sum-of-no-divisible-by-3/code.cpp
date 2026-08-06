#include <iostream>
using namespace std;

// Write a program to get the sum of n numbers which are divisible by 3 as output using for loop.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        
    }
    cout << sum;
}

// Output:
// Enter your number: 20
// 63