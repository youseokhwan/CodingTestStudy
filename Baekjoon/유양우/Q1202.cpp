#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, K;
	cin >> N >> K;
	vector<pair<int, int>> jewel(N);
	vector <int> knapsack(K);
	priority_queue<int> pq;
	// ���� �Է�
	for (int i = 0; i < N; i++) {
		cin >> jewel[i].first >> jewel[i].second;
	}
	// ���� ���� �Է�
	for (int i = 0; i < K; i++) {
		cin >> knapsack[i];
	}
	// ���Ը� ������������ ����
	sort(jewel.begin(), jewel.end());
	sort(knapsack.begin(), knapsack.end());
	long long sum = 0;
	int size = 0;
	// ������ �������
	for (int i = 0; i < K; i++) {
		// �����ǹ��԰� ������ ���Ժ��� ũ�ų� ���� ������ ���� size�� ������ �������� ������쿡 �켱���� ť�� enque
		while (size < N && jewel[size].first <= knapsack[i]) {
			pq.push(jewel[size++].second);
		}
		// pq���� �׻� ū ������ ���������Ƿ� ������� ������ sum�� ���ϰ� pop
		if (!pq.empty()) {
			sum += pq.top();
			pq.pop();
		}
	}
	cout << sum;
}