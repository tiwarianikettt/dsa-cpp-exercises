#include <iostream>
using namespace std;

// Reverse the order of an array.

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}

// Output:
// 5 2 1 8 7 2 4 