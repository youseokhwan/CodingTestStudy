#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
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
	priority_queue<int, vector<int>, greater<int> > pq;

	for (int i = 0; i < N; i++) {
		int start; cin >> start;
		int end; cin >> end;
		time.push_back(make_pair(start, end));
	}

	pq.push(3);
	cout << pq.top();
	pq.push(4);
	cout << pq.top();
	pq.push(2);
	cout << pq.top();
	pq.pop();
	sort(time.begin(), time.end(), cmp);
	pq.push(time[0].second);
	for (int i = 1; i < N; i++) {
		if (pq.top() <= time[i].first) {
			pq.pop();
			pq.push(time[i].second);
		}
		else {
			pq.push(time[i].second);
		}
	}
	cout << pq.size();
}