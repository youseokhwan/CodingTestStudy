//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <cstdio>
//#include <string>
//using namespace std;
//int N, M, V;
//// ������ �湮�ߴ��� Ȯ���ϴ� check �迭
//vector<vector<int>> check;
//// ����
//int map[26][26];
//// 2���� �迭 �����¿츦 Ȯ���ϱ� ���� direction x, y
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//// ���� ī���� ����
//int cnt = 0;
//// �� ������ ��������� ��Ÿ���� cntArr
//vector<int> cntArr;
//
//void bfs(int a, int b) {
//	queue <pair<int, int>> q;
//	q.push(make_pair(a, b));
//	check[a][b] = 1; //������ �湮üũ
//	cnt = 1; // �����ϳ� ++
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
//			if (vx >= 0 && vy >= 0 && vy < N && vx < N) {
//				// ������ �ְ� �湮���� �ʾ�����
//				if (map[vx][vy] == 1 && check[vx][vy] == 0) {
//					q.push(make_pair(vx, vy)); 	// enque
//					check[vx][vy] = 1; //�湮üũ
//					cnt++; // �����ϳ� ++
//				}
//			}
//		}
//	}
//	cntArr.push_back(cnt); // �� ������ ������ cntArr�� push
//}
//
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	cin >> N;
//	check.resize(N + 1, vector<int>(N + 1, 0));
//
//	// string���� ���� �� map�ʱ�ȭ
//	for (int i = 0; i < N; i++) {
//		string temp;
//		cin >> temp;
//		for (int j = 0; j < N; j++) {
//			map[i][j] = temp[j] - '0';
//
//		}
//	}
//
//	// ������ �Ѱ���
//	int c = 0;
//	// ���� ���� ���� 1(����� ���)�̰� �湮���� �ʾ�����
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			// ������1�̰� �湮���� �ʾ�����
//			if (map[i][j] == 1 && check[i][j] == 0) {
//				c++; // ������ �Ѱ����� �ϳ� �ø���. -> �� �������� �� �� ���� ����Ǳ� ������ ���⼭ c++
//				bfs(i, j); // bfs ����
//			}
//		}
//	}
//	// �Ѵ��� ���
//	cout << c << "\n";
//	// Arr Sort
//	sort(cntArr.begin(), cntArr.end());
//	// ������ �������� ���
//	for (int i = 0; i < cntArr.size(); i++) {
//		cout << cntArr[i];
//		cout << "\n";
//	}
//}