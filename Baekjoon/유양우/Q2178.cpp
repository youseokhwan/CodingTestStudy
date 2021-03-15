//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <cstdio>
//#include <string>
//using namespace std;
//int N, T, M, K;
//// ������ �湮�ߴ��� Ȯ���ϴ� check �迭
//vector<vector<int>> check;
//vector<vector<int>> v;
//// 2���� �迭 �����¿츦 Ȯ���ϱ� ���� direction x, y
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//
//void bfs(int a, int b) {
//	queue <pair<int, int>> q;
//	q.push(make_pair(a, b));
//	check[a][b] = 1; //������ �湮üũ
//	while (!q.empty()) {
//		// queue�� �� x,y�� ���� �� deque
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		// �����¿� Ž���� ���� for��
//		for (int i = 0; i < 4; i++) {
//			// vx,vy�� x,y�� direction�� ���� �� ����
//			int vx = x + dx[i];
//			int vy = y + dy[i];
//			// �Ʒ� ������ vx, vy�� 0���� ũ�� N���� �۾ƾ��ϹǷ� �̶��� �����ϰԲ� �Ѵ�.
//			if (vx >= 0 && vy >= 0 && vy < M && vx < N) { //m 10 n 8
//				// ������ �ְ� �湮���� �ʾ�����
//				if (v[vx][vy] == 1 && check[vx][vy] == 0) {
//					q.push(make_pair(vx, vy)); 	// enque
//					check[vx][vy] = 1; //�湮üũ
//					v[vx][vy] = v[x][y] + 1; // ����ؼ� Ž���� �� ������ ���� map(v) +1�� �� ���������� Ž���Ѵ�.
//				}
//			}
//		}
//	}
//
//}
//
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N >> M;
//	check.clear();
//	v.clear();
//	check.resize(N, vector<int>(M, 0));
//	v.resize(N, vector<int>(M, 0));
//
//	// �������
//	for (int i = 0; i < N; i++) {
//		string temp;
//		cin >> temp;
//		for (int j = 0; j < M; j++) {
//			v[i][j] = temp[j] - '0';
//		}
//	}
//
//	bfs(0, 0);
//	cout << v[N - 1][M - 1];
//}