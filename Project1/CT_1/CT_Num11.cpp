#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int P = 0;
    
    cin >> P;

    vector<int> ATM(P);

    for (int i = 0; i < P; i++)
    {
        cin >> ATM[i];
    }

    sort(ATM.begin(), ATM.end());

    int time = 0;
    time = P;
   
    int result = 0;
    for (int i = 0; i < P; i++)
    {
        result = time* ATM[i]+result;
        time--;

    }
    cout << result << '\n';
}

