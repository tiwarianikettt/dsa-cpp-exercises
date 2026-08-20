#include <iostream>
#include <climits>
using namespace std;

// Write a program to print the index of the msallest value in the array.

int main() {
    int arr[] = {10, 20, 34, -12, 33};

    int smallest = INT_MAX;
    int smallestIndex = 0;

    int i = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    while (i < size)
    {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }

        i++;
    }

    cout << "Index of the smallest number in the given array is: "
         << smallestIndex << endl;

    return 0;
}

// Output:
// Index of the smallest number in the given array is: 3