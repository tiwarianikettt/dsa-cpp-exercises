#include <iostream>
using namespace std;

// Write a program to get the factorial of number n as output.

int main() {
        int n;
        cout << "Enter the number: ";
        cin >> n;
        int factorial = 1;

        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
         cout << "factorial of the given number is: " << factorial << endl;
         return 0;
}

// Output:
// Enter the number: 5
// factorial of the given number is: 120