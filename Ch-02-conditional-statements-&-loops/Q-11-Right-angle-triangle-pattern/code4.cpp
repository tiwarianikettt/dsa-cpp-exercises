#include <iostream>
using namespace std;

// Make a right angled triangle pattern of numbers where no number repeats itself.
// Floyd's triangle pattern.

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << num << " ";
            num ++;
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 3
// 1 
// 2 3 
// 4 5 6 