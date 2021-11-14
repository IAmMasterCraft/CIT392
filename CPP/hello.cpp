#include <iostream>
using namespace std;
int factorial (int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}
int main () {
    int num;
    cout << "Factorial Calculator!\n";
    cin >> num;
    if (num >= 0) {
        cout << "Factorial for " << num << " is: " << factorial(num) << "\n";
    } else cout << num << " is not a positive number!\n";
    return 0;
}
