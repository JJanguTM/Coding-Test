#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;

    cin >> N;

    vector<string> vec1;

    // 단어 입력 받기
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        vec1.push_back(word);
    }

    // 단어를 길이순으로 정렬, 길이가 같을 경우 사전순으로 정렬
    sort(vec1.begin(), vec1.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;  // 길이가 같을 때 사전순으로 정렬
        }
        return a.length() < b.length();  // 길이가 다르면 길이순으로 정렬
        });

    vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());

    // 정렬된 단어 출력
    
    for (const auto& word : vec1) {
        cout << word << '\n';
    }

    return 0;
}

//백준에서 할 수 있으면 불필요한 말 하지말자. 오답처리됨 ex(cout << "단어를입력하세요")
