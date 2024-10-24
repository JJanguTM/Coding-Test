#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N,M;
	
	cout << " N을 입력해주세요 " << endl;

	cin >> N;

	vector<int> arr1(N);
	

	for (int i = 0; i < N; i++)
	{
		cin >> arr1[i];
	}

	cout << " M을 입력해주세요 " << endl;

	cin >> M;

	vector<int> arr2(M);
	vector<int> arr3(N,0);

	

	
	for (int i = 0; i < M; i++)
	{
		cin >> arr2[i];
		
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (arr2[i] == arr1[j]) {
				arr3[i] = 1;  // 일치하면 1로 설정
				break;  // 더 이상의 비교는 필요 없음
			}
		}
	}

	// 결과 출력
	for (int i = 0; i < N; i++) {
		cout << arr3[i] << endl;
	}

	return 0;
}
// 시간초과
