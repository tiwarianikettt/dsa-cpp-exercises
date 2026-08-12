#include <iostream>
using namespace std;

// Make a right angled triangle pattern of " * " .

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 