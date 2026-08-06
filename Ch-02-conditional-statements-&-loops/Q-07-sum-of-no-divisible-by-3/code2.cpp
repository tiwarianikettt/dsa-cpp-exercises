#include <iostream>
using namespace std;

// Write a program to get the sum of n numbers which are divisible by 3 as output using while loop.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int i = 0;
    int sum = 0;
    while (i <= n)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        i++;
        
    }
    cout << sum;

    return 0;
}

// Output:
// Enter your number: 20
// 63