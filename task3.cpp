#include <iostream>
using namespace std;

// Proper recursive function to calculate a^b
int power(int a, int b) {
    if (b == 0) return 1;      // Base case
    return a * power(a, b - 1); // Recursive case
}

int main() {
    int a, b;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the exponent (b): ";
    cin >> b;

    int result = power(a, b);
    cout << a << "^" << b << " = " << result << endl;

    return 0;
}
