#include <iostream>
using namespace std;

// Creat a hollow diamond.

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    // upper half (including the widest middle row)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++)
            cout << " ";

        for (int j = 0; j <= 2*i; j++) {
            if (j == 0 || j == 2*i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // lower half (starts one row below the middle, ends at the tip)
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - 1 - i; j++)
            cout << " ";

        for (int j = 0; j <= 2*i; j++) {
            if (j == 0 || j == 2*i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}