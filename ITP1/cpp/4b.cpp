#include <iostream>
#include<iomanip>

#define pi 3.141592653589

using namespace std;

int main()
{
    double r;
    cin >> r;

    cout << fixed << setprecision(5) << r * r * pi << " " << 2 * r * pi << endl;

    return 0;
}