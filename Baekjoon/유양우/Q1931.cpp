#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

// ����ð� ������������ ���� �� cmp
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N; cin >> N;
	// vector pair ���� �� �ʱ�ȭ
	vector<pair<int, int>> time;
	for (int i = 0; i < N; i++) {
		int start; cin >> start;
		int end; cin >> end;
		time.push_back(make_pair(start, end));
	}
	// �ʱ� count �� ����
	int cnt = 1;
	// ���۽ð��� ������������ ������ �� ������ �ð��� ����
	sort(time.begin(), time.end());
	sort(time.begin(), time.end(), cmp);

	// ù ȸ�� �����½ð��� ����
	int end = time[0].second;

	for (int i = 1; i < N; i++) {
		// ���۽ð��� �����½ð����� ũ�� cnt 1���� �� �ش� �ε��� �����½ð��� ���� �� �񱳿���
		if (time[i].first >= end) {
			cnt++;
			end = time[i].second;
		}
	}
	cout << cnt;
}