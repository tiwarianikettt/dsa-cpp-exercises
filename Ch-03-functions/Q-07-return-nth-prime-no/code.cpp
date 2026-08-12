#include <iostream>
using namespace std;

// Write a function to return the value of n th prime no.

bool is_prime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int nth_prime(int a) {
    int count = 0;
    while (count <= a) {
        if (is_prime(n)) {
            count++;
            return n;
        }

        n++;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << nth_prime(n);
    return 0;
}

