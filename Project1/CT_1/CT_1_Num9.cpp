#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    int L, S, i;
    int count = 0;
    cin >> L;
    cin >> S;
    vector<string> Num1(L);
    vector<string> Num2(S);
    vector<string> Num3;
    for (i=0; i < L; i++)
    {
        cin >> Num1[i];
    }

    for (i=0; i < S; i++)
    {
        cin >> Num2[i];
    }

    for (i = 0; i < S; i++)
    {
        for (int j = 0; j < L; j++)
        {
            if (Num1[j] == Num2[i])
            {
                Num3.push_back(Num1[j]);
                count = count + 1;
            };
        }
    }

    sort(Num3.begin(), Num3.end());
    
    cout << count << '\n';

    for (const auto& name : Num3) {
        cout << name << '\n';
    }



   

    return 0;
} //이중 For문 쓰지말것, 교지합 및 Two Pointer 및 이진탐색시 배열sort필수
