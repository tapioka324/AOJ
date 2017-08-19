#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;

    while (cin >> a >> b) {
        int digits = (int)log10(a + b) + 1;
        cout << digits << endl;
    }

    return 0;
}
