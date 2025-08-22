#include <iostream>

using namespace std;

// ͳ�ƶ�������1�ĸ���
int count(int n) {
	n = (n & 0x55555555) + ((n & 0xaaaaaaaa) >> 1);
	n = (n & 0x33333333) + ((n & 0xcccccccc) >> 2);
	n = (n & 0x0f0f0f0f) + ((n & 0xf0f0f0f0) >> 4);
	n = (n & 0x00ff00ff) + ((n & 0xff00ff00) >> 8);
	n = (n & 0x0000ffff) + ((n & 0xffff0000) >> 16);
	return n;
}

// �ж�һ�����Ƿ�������
// O(sqrt(n))
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	if (n == 2 || n == 3) {
		return true;
	}
	if (n % 2 == 0 || n % 3 == 0) {
		return false;
	}
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, m;
	cin >> n >> m;
	// ��ȡ��������n��m
	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// ��ȡn���������洢������arr��
	int cnt = 0;
	for (int i = 0; i < (1 << n) - 1; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				sum += arr[j];
			}
		}
		// �������п��ܵ��Ӽ���
		if (isPrime(sum) && count(i) == m) {
			cnt++;
		}
		// ����Ӽ������������Ӽ���СΪm����������һ
	}
	cout << cnt << endl;
	// ��������������Ӽ�����
	return 0;
}
