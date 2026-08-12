#include <iostream>
using namespace std;

// Create a function to return the sum of the digits of the given number.

int sum_digits(int n) {
    int sum=0;
    while (n > 0) {
        int last_digit = n % 10;
        n /= 10;

        sum += last_digit;
    }
    cout << "The sum of digits of the given number is: " << sum << endl;
    return sum;
}

int main() {
    sum_digits(5678);
    return 0;
}

// Output:
// The sum of digits of the given number is: 26