#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

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

    cout << min << " " << max << " " << sum << endl;

    return 0;
}