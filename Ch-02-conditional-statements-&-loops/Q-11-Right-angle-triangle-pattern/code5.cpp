#include <iostream>
using namespace std;

// Make a right angled triangle pattern of reverse numbers
// where number repeats itself in different rows.

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 5
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 