#include <iostream>
using namespace std;

// Create a function to return the bionomial coefficient (nCr) value of the given number.

int binomial(int n) {
    int factorial = 1;
    for (int i=1; i<=n; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int nCr(int n, int r) {
    int fact_n = binomial(n);
    int fact_r = binomial(r);
    int fact_nr = binomial(n-r);

    return fact_n/(fact_r*fact_nr);
}

int main() {
    cout << "The binomial coefficient of given values are: " << nCr(8,2) << endl;
    return 0;
}

// Output:
// The binomial coefficient of given values are: 28