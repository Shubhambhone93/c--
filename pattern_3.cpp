#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Left part: 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << "\t";
        }

        // Middle gap: 2*(n-i) tabs
        for (int t = 1; t <= 2 * (n - i); t++) {
            cout << "\t";
        }

        // Right part: i-1 to 1  (so i will not repeat)
        for (int j = i - 1; j >= 1; j--) {
            cout << j << "\t";
        }

        cout << endl;
    }

    return 0;
}

