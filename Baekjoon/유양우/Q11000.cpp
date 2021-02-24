#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N; cin >> N;
	// vector pair ����
	vector<pair<int, int>> time;
	// ���������� �켱���� �ϴ� �켱����ť ����(Head�� �׻� ���� ���� ���Բ�)
	priority_queue<int, vector<int>, greater<int> > pq;
	// vector pair �� �Է¹ޱ�
	for (int i = 0; i < N; i++) {
		int start; cin >> start;
		int end; cin >> end;
		time.push_back(make_pair(start, end));
	}
	// pair�� first���� ������������ ���� -> �ּ��� ���ǽ��� ����ؾ��ϱ� ������ ���۽ð��� �������� �������� ����
	sort(time.begin(), time.end());
	// ù ��° ������ �ð��� �켱���� ť�� enque
	pq.push(time[0].second);
	for (int i = 1; i < N; i++) {
		// ���۽ð��� �켱����ť�� �ִ� ������ ũ�� pop 
		if (pq.top() <= time[i].first) {
			pq.pop();
		}
		// �Ŀ� �� ������ �ð��� �־��ش�.
		pq.push(time[i].second);
	}
	// �켱���� ť�� ����� ����Ѵ�
	cout << pq.size();
}