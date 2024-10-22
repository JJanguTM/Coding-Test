#include <iostream>

using namespace std;
int x = 0;
int y = 0;

int fibonacci(int n) {

    if (n == 0) {
        x = x + 1;
        return 0;
    }
    else if (n == 1) {
        y = y + 1;
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}

int main() {
    int T;
    cout << "Enter a number: ";
    cin >> T;

    int result = fibonacci(T);
    cout << "Fibonacci(" << T << ") = " << result << endl;
    cout << x << ' ' << y << endl;


}