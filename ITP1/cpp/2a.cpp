#include <iostream>
using namespace std;

int main() {
    // input
    int a, b;
    cin >> a >> b;

    // solve & output
    if (a < b) {
        cout << "a < b" << endl;
    } else if (a > b) {
        cout << "a > b" << endl;
    } else {
        cout << "a == b" << endl;
    }

    return 0;
}
