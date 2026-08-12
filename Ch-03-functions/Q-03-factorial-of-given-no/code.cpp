#include <iostream>
using namespace std;

// Create a function to find the factorial of given number n.

int factorial(int n) {
    int fact = 1;

    for (int i=1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    cout << "The factorial of given number is: " << factorial(5) << endl;
    return 0;
}

// Output
// The factorial of given number is: 120