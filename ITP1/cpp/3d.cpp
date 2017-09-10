#include <iostream>
using namespace std;

int main() {
    // input
    int a, b, c;
    cin >> a >> b >> c;

    // solve
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (c % i == 0) count++;
    }

    // output
    cout << count << endl;

    return 0;
}
