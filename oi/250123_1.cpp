#include <iostream>

using namespace std;

// 统计二进制中1的个数
int count(int n) {
	n = (n & 0x55555555) + ((n & 0xaaaaaaaa) >> 1);
	n = (n & 0x33333333) + ((n & 0xcccccccc) >> 2);
	n = (n & 0x0f0f0f0f) + ((n & 0xf0f0f0f0) >> 4);
	n = (n & 0x00ff00ff) + ((n & 0xff00ff00) >> 8);
	n = (n & 0x0000ffff) + ((n & 0xffff0000) >> 16);
	return n;
}

// 判断一个数是否是质数
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
	// 读取两个整数n和m
	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// 读取n个整数并存储在数组arr中
	int cnt = 0;
	for (int i = 0; i < (1 << n) - 1; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				sum += arr[j];
			}
		}
		// 计算所有可能的子集和
		if (isPrime(sum) && count(i) == m) {
			cnt++;
		}
		// 如果子集和是素数且子集大小为m，计数器加一
	}
	cout << cnt << endl;
	// 输出满足条件的子集数量
	return 0;
}
