#include <iostream>
using namespace std;

void power(int base, int exponent) {
    //2^3 is 2 * 2 * 2
    //2^5 is 2 * 2 * 2 * 2 * 2
    int val = base;

    for(int i = 0; i < exponent - 1; i++)
    {
        val = val * base;
    }

    cout << base << " to the power of " << exponent << " is: " << val << endl;
}



int main() {
    cout << "Github Test" << endl;
    power(2, 3);
    power(4, 2);
    return 0;
};