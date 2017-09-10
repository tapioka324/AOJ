#include <iostream>
#include<iomanip>
using namespace std;

#define pi 3.141592653589

int main() {
    // input
    double r;
    cin >> r;

    // solve & output
    cout << fixed << setprecision(5) << r * r * pi << " " << 2 * r * pi << endl;

    return 0;
}
