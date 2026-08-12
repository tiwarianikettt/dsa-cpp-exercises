#include <iostream>
using namespace std;

// Create a function which returns the minimum of two numbers.

int min_no(int a, int b) {
    if (a < b)
    {
        cout << "The minimum of given two numbers is: " << a << endl;
        return a;
    } else {
        cout << "The minimum of given two numbers is: " << b << endl;
        return b;
    }
    
}

int main() {
    min_no(4, 7);
    return 0;
}

// Output:
// The minimum of given two numbers is: 4