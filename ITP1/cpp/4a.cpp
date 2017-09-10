#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // input
    int a, b;
    cin >> a >> b;

    // solve & output
    cout << a / b << " " << a % b << " " << fixed << setprecision(5) << (double)a / b << endl;

    return 0;
}
