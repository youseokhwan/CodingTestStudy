//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//#include <queue>
//#include <string>
//using namespace std;
//
//bool cmp(string a, string b)
//{
//	if (a.size() == b.size()) { // ���̰� ������ ����������
//		return a < b;
//	}
//	return a.size() < b.size(); // �ٸ��� ũ�Ⱑ �ٸ��� ������
//}
//
//
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int N;
//	cin >> N;
//	vector<string> v(N);
//	for (int i = 0; i < N; i++) {
//		cin >> v[i];
//		
//	}
//	sort(v.begin(), v.end(), cmp);
//
//	v.erase(unique(v.begin(), v.end()), v.end());
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i]<<"\n";
//	}
//}