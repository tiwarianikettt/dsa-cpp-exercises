#include <iostream>
using namespace std;

// Create a function which gives out the sum of numbers from 1 to n as output.

int sum_n(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
    
}

int main() {
    cout << "The sum is: " << sum_n(10) << endl;
    return 0;
}

// Output:
// The sum is: 55