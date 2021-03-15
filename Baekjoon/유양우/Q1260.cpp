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
//void bfs(int start) {
//	// Queue q ����
//	queue<int> q;
//	// Ž���� �����ϴ� �ʱ��� start�� enque
//	q.push(start);
//	// vector resize
//	check.resize(N + 1);
//	// start���� Ž���ϹǷ� �湮�ߴٰ� üũ.
//	check[start] = 1;
//	// q�� ������� �� ����
//	while (!q.empty()) {
//		// queue front�� �ִ� ���� node�� ����.
//		int node = q.front();
//		// queue front���� �����
//		q.pop();
//		// queue front���� ���
//		cout << node << " ";
//		// ��������� node���� size��ŭ ���ư���.
//		for (int i = 1; i < adjacent[node].size(); i++) {
//			// node�࿡ ������ �ְ� �湮���� �ʾ����� queue�� enque�ϰ� �湮ǥ��
//			if (adjacent[node][i] == 1 && check[i] == 0) {
//				q.push(i);
//				check[i] = 1;
//			}
//		}
//	}
//}
//
//void dfs(int start) {
//	// stack s����
//	stack<int>s;
//	// �ʱ� Ž������ stack�� push
//	s.push(start);
//	// check vector resize
//	check.resize(N + 1);
//	// ������ �湮üũ
//	check[start] = 1;
//	// ������ ���
//	cout << start << " ";;
//	// ������ ������� �� ����
//	while (!s.empty()) {
//		// stack�� �ֻ��� ���Ҹ� ����
//		int node = s.top();
//		// ��������� ũ�⸸ŭ
//		for (int i = 1; i < adjacent[node].size(); i++) {
//			// node�࿡ ������ �ְ� �湮���� �ʾ����� push, �湮ó�� �� ��� �� break(���ο� ������ ������ ���� Ž���ϱ� ����)
//			if (adjacent[node][i] == 1 && check[i] == 0) {
//				s.push(i);
//				check[i] = 1;
//				cout << i << " ";
//				break;
//			}
//			// �� Ž���� ���� ���� ��쿡 pop
//			else if (i == (adjacent[node].size() - 1)) {
//				s.pop();
//			}
//
//		}
//	}
//}
//
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	// �Է¹ޱ�
//	cin >> N >> M >> V;
//	// �ε��� ������ ���� vector �迭 ��������
//	check.resize(N + 1);
//	adjacent.resize(N + 1, vector<int>(N + 1, 0));
//	int a, b;
//	// ������� ������ �ִٸ� 1�� �ʱ�ȭ
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b;
//		adjacent[a][b] = 1;
//		adjacent[b][a] = 1;
//	}
//	// DFS ����
//	dfs(V);
//	// �湮�ߴ��� Ȯ���ϴ� �迭 check �ʱ�ȭ
//	check.clear();
//	cout << "\n";
//	// BFS ����
//	bfs(V);
//}