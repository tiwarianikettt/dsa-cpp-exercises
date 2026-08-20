#include <iostream>
using namespace std;

// Find smallest number in an array

int main()
{
    int arr[] = {10, 20, 34, -12, 33};
    int smallest = INT8_MAX;

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }

    }
     cout << "The smallest number in the arrays is: " << smallest << endl;
    return 0;
}

// Output:
// The smallest number in the arrays is: -12