#include <iostream>
using namespace std;

int main() {
    int i, j;

    // Increasing part
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    // Decreasing part
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
