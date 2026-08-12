#include <iostream>
using namespace std;

// Create a function to convert binary to decimal.

int bin_to_dec(int n) {
    int ans = 0;
    int power = 1;

    while (n > 0) {
        int rem = n % 10;
        n = rem * power;

        n = n / 10;
        power *= 2;
    }
    return ans;
}

int main() {
    cout << bin_to_dec(111000) << endl;
    return 0;
}