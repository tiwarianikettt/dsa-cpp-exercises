#include <iostream>
using namespace std;

// Perform lineaar search programming on an array search for an element and return its index.

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
   int size = 7;
    int search;
    cout << "Enter the number to search: ";
    cin >> search;

    for(int i = 0; i < size; i++) {
        if(arr[i] == search) {
            cout << "The index of the given number is: " << i << endl;
            return 0;
            break;
        }
    }
    cout << "Number not found: -1" << endl;
    return 0;
}

// Output:
// Enter the number to search: 8
// The index of the given number is: 3