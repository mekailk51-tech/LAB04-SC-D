
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Larger number: " << a;
    } else if (b > a) {
        cout << "Larger number: " << b;
    } else {
        cout << "Both numbers are equal";
    }

    return 0;
}
