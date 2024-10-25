#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Point {
    int x;
    int y;

};


int main() {
    int T;
    cin >> T;
    vector<Point> P(T);

    for (int i = 0; i < T; i++)
    {
        cin >> P[i].x >> P[i].y;
    }

    sort(P.begin(), P.end(), [](const Point& a, const Point& b) {
        if (a.x == b.x)
        {
            return a.y < b.y;
        }
        else
            return a.x < b.x;
        
        });


    for (const auto& p : P) {
        cout << p.x << " " << p.y << '\n';
    }

    return 0;
}
