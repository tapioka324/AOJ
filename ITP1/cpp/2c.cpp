#include <iostream>
using namespace std;

int main() {
    // input
    int a, b, c;
    cin >> a >> b >> c;

    // solve
    int tmp;
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    // output
    cout << a << " " << b << " " << c << endl;

    return 0;
}
