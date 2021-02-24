#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int main() {
	// �������� ���� �������� ���� 1,000,000������⿡ ��� ������ long long���� �����Ѵ�.
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	long long N; cin >> N; // �������� ���� ���� �� �ʱ�ȭ
	// ������ ���� ���� �� �������� �� �ʱ�ȭ
	vector<long long> applicant;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		applicant.push_back(n);
	}
	// �Ѱ������� �ΰ������� ���� �� �ִ� �������� �� ���� �� �ʱ�ȭ
	long long B; cin >> B;
	long long C; cin >> C;
	// �ּ� �ʿ��� �������� �� sum ����
	long long sum = 0;
	// �������� ��������
	for (int i = 0; i < N; i++) {
		applicant[i] -= B; // ��� �迭���� �Ѱ������� ���� �� �ִ� �л��� ���� sum++
		sum++;
		if (applicant[i] > 0) { // ���õǾ�� �� �����ڰ� �����ִٸ�
			if ((applicant[i] % C) == 0) { // ���� �����ڿ��� �ΰ������� ������ �� �ִ� C�� ������ �������� 0 �̸� applicant[i]/C�� �����ְ�
				sum += (applicant[i] / C);
			}
			else { // �������� 0�̾ƴϸ� 1��ŭ �� �����ش�.
				sum += ((applicant[i] / C)) + 1;
			}
		}
	}
	cout << sum;
}