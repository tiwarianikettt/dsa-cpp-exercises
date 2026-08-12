#include <iostream>
using namespace std;

// Make a right angled triangle pattern of numbers where every number
// repeats in different rows.

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 
