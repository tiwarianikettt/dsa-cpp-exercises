#include <iostream>
using namespace std;

// Make a right angled triangle pattern of alphabets where no number repeats itself.
// Floyd's triangle pattern.

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    char ch='A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 4
// A 
// B C 
// D E F 
// G H I J 