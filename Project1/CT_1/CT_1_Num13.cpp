#include <iostream> 
#include<stack>
using namespace std;


int main() {
    int N=0;
    cin >> N;

    stack<int> Zero;
    
    for (int i = 0; i < N; i++)
    {
        int Num = -1;
        cin >> Num;

        if (Num == 0)
        {
            Zero.pop();
        }
        else
        {
            Zero.push(Num);
        }

    }
    
    

    int result = 0;
    while (!Zero.empty())
    {
        result = result + Zero.top();
        Zero.pop();
    }


    cout << result << '\n';
 
}
