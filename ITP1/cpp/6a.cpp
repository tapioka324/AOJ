#include <iostream>
using namespace std;

int main() {
    // input
    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // solve
    for (int i = n - 1; i > 0; --i) {
        cout << a[i] << " ";
    }

    // output
    cout << a[0] << endl;

    return 0;
}
