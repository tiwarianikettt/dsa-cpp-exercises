#include <iostream>
using namespace std;

// Write a C++ program that takes a character as input and checks whether it is in lowercase, uppercase, or not a letter.

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "The character is in lowercase." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The character is in uppercase." << endl;
    }
    else
    {
        cout << "The character is not a letter." << endl;
    }

    return 0;
}

// Output:
// Enter a character: s
// The character is in lowercase.