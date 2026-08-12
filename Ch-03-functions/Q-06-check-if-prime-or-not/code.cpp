#include <iostream>
using namespace std;

// Write a function to check if a prime or not.

void prime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            cout << "The given number is composite." << endl;
        } else {
            cout << "The given number is prime." << endl;
        }
    }
}

int main() {
    prime(3);
    return 0;
}

// Output:
// The given number is prime.