#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num <= 0) {
        cout << "Please enter a number greater than 0." << endl;
        return 0;
    }
    cout << "Factors of " << num << " are: " << endl;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
