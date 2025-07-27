#include <iostream>
using namespace std;

int factorial(int N) {
    if (N == 0 || N == 1)
        return 1;
    return N * factorial(N - 1);  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}
