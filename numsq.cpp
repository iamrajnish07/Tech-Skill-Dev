#include <iostream>
using namespace std;

int main() {
    int n = 3; // largest number
    int size = 2 * n - 1; // total rows/columns

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int minDist = i; // start with distance from top

            if (j < minDist) minDist = j; // check distance from left
            if (size - 1 - i < minDist) minDist = size - 1 - i; // check distance from bottom
            if (size - 1 - j < minDist) minDist = size - 1 - j; // check distance from right

            cout << " " << n - minDist;
        }
        cout << endl;
    }

    return 0;
}
