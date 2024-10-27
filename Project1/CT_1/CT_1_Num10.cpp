#include <iostream>
#include <string>

using namespace std;

bool isValidParenthesis(const string& ps) {
    int balance = 0; // 

    for (char ch : ps) {
        if (ch == '(') {
            balance++; 
        } else {
            balance--; 
        }
        if (balance < 0) { 
            return false; 
        }
    }
    return balance == 0; 
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string ps;
        cin >> ps;

        if (isValidParenthesis(ps)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
