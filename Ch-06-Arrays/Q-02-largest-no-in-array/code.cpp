#include <iostream>
#include <climits>
using namespace std;

// Find the largest number is the array.

int main() {
    int arr[] = {-12, 56, 67, 32, 1};
    int largest = INT_MIN;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "The largest number in the given array: " << largest << endl;
    return 0;
}

// Output:
// The largest number in the given array: 67