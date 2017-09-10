#include <iostream>
using namespace std;

int main() {
    // input
    int n;
    cin >> n;

    // solve
    int a, min, max;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0) {
            min = a;
            max = a;
        }
        if (a > max) {
            max = a;
        }
        if (a < min) {
            min = a;
        }
        sum += a;
    }

    // output
    cout << min << " " << max << " " << sum << endl;

    return 0;
}
