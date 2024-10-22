#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string result;
        cin >> result;

        int score = 0, currentScore = 0;
        for (char c : result) {
            if (c == 'O') {
                currentScore++;
                score += currentScore;
            }
            else {
                currentScore = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}
