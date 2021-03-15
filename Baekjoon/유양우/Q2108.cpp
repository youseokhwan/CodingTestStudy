//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int N;
//	cin >> N;
//	vector<int> array(N);
//	vector<int> answer(4);
//	vector<int> cnt(8001, 0);
//	int sum = 0;
//	int max = 0;
//	int temp;
//	int mode;
//	bool isSecond = false;
//	for (int i = 0; i < N; i++) {
//		cin >> array[i];
//		sum += array[i];
//		temp = (array[i] <= 0) ? abs(array[i]) : array[i] + 4000;
//		cnt[temp]++;
//		if (cnt[temp] > max)
//			max = cnt[temp];
//	}
//
//	// ������
//	answer.push_back(sum / N);
//
//	// �߾Ӱ�
//	sort(array.begin(), array.end());
//	answer.push_back(array[N / 2]);
//
//	// �ֺ� 
//	for (int i = -4000; i < 4001; i++) {
//		temp = i <= 0 ? abs(i) : i + 4000;
//		// ����Ž������ max���� ���ؼ� ã��
//		if (cnt[temp] == max) {
//			mode = i;
//
//			// ���� ���� ������ �� 2���� max���� �ְ� break;
//			if (isSecond)break;
//
//			isSecond = true;
//		}
//	}
//
//	answer.push_back(mode);
//	// ����
//	answer.push_back(array[array.size() - 1] - array[0]);
//
//	cout << round(sum / (double)N) << "\n";
//	cout << array[N / 2] << "\n";
//	cout << mode << "\n";
//	cout << array[array.size() - 1] - array[0] << "\n";
//}