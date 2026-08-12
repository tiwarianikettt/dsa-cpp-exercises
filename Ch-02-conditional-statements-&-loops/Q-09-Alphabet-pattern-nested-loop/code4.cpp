#include <iostream>
using namespace std;

// Make a right angled triangle pattern of alphabets where no number repeats itself.
// Floyd's triangle pattern.

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 1 + 1; j > 0; j--)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}

// Output:
// Enter the number of lines: 5
// A 
// B A 
// C B A 
// D C B A 
// E D C B A 