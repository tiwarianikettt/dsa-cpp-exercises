#include <iostream>
using namespace std;

// Make a right angled triangle pattern of numbers where every number
// repeats in their respective rows according to their values.

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << (i + 1);
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 5
// 1
// 22
// 333
// 4444
// 55555