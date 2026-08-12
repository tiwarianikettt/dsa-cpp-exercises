#include <iostream>
using namespace std;

// Write a function to convert decimal into binary.

int dec_to_bin(int n) {
    int ans = 0;
    int power = 1;

    while (n > 0) {
        int remainder = n % 2;
        n = n / 2;

        ans += remainder * power;
        power = power * 10;
    }

    return ans;
}
int main() {
    cout << dec_to_bin(56) << endl;
    return 0;
}

// Output:
// 111000