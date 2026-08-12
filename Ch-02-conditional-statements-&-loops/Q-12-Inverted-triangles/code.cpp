#include <iostream>
using namespace std;

// display this pattern:
// 11111
//  2222
//   333
//    44
//     5

int main () {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 5
// 11111
//  2222
//   333
//    44
//     5