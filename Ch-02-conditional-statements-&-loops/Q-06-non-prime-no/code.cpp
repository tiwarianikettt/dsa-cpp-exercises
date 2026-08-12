#include <iostream>
using namespace std;

// Write a program to check whether the given number is prime or not.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= n-1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
        
    }

    if (isPrime == true)
    {
        cout << "The given number is prime." << endl;
    } else {
        cout << "The given number is composite." << endl;
    }
    return 0;
    
}

// Output:
// Enter your number: 7
// The given number is prime.

// Enter your number: 33
// The given number is composite.