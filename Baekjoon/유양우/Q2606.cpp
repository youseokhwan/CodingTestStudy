//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//#include <queue>
//#include <stack>
//using namespace std;
//int N, M, V;
//// ������ �湮�ߴ��� Ȯ���ϴ� check �迭
//vector<int> check;
//// 2���� �������
//vector<vector<int>> adjacent;
//
//// BFS�� ����� ���� : BFS�� �������� ���� Ž���� �����ϸ� Ž���ϴ� ������ queue�� �� ���� ���� ������ BFS�� ���
//int bfs(int start) {
//	queue <int> q;
//	// ������ enque
//	q.push(start);
//	// check�迭�� ���� ���� �湮 üũ
//	check[start] = 1;
//	// 1�� ��ǻ�ͷ� ���� ���̷����� �ɸ��� ��ǻ�� ���� ī����
//	int cnt = 0;
//	// queue�� �� �� ����
//	while (!q.empty()) {
//		// node�� queue front�� �ִ� ���� ����
//		int node = q.front();
//		// queue deque
//		q.pop();
//		// �������� node�� �� �����ŭ �ݺ� 
//		for (int i = 1; i < adjacent[node].size(); i++) {
//			// �������node���� Ž���ϴµ� ������ �̾����ְ� �湮���� �ʾ����� enque �� ��ǻ���� ���� ���� �� �湮 üũ 
//			if (adjacent[node][i] == 1 && check[i] == 0) {
//				q.push(i);
//				cnt++;
//				check[i] = 1;
//			}
//		}
//
//	}
//	return cnt;
//}
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	// �Է¹ޱ�
//	int N, computer; cin >> N >> computer;
//	// vector size resize
//	adjacent.resize(N + 1, vector<int>(N + 1, 0));
//	check.resize(N + 1);
//	// ������ ���� �Է¹ް� ������� 1�� �ʱ�ȭ
//	for (int i = 0; i < computer; i++) {
//		int a, b; cin >> a >> b;
//		adjacent[a][b] = adjacent[b][a] = 1;
//	}
//	// bfs������ ���� �� ���
//	cout << bfs(1);
//}