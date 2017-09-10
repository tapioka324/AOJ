#include <iostream>
using namespace std;

int main() {
    // input
    int S;
    cin >> S;

    // solve
    int h = S / 3600;
    S %= 3600;
    int m = S / 60;
    S %= 60;

    // output
    cout << h << ":" << m << ":" << S << endl;

    return 0;
}
