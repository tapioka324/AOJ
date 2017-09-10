#include <iostream>
using namespace std;

int main() {
    // input
    int a, b;
    char op;

    while (cin >> a >> op >> b) {
        // solve & output
        switch (op) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
            case '?':
                return 0;
        }
    }

    return 0;
}
