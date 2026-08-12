#include <iostream>
using namespace std;

// Display this pattern:
// AAAAA
//  BBBB
//   CCC
//    DD
//     E

int main () {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++) {
            char ch = 'A' + i;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 5
// AAAAA
//  BBBB
//   CCC
//    DD
//     E