//没过,TLE
#include <iostream>
#include <vector>

using namespace std;

vector<int> cheng(const vector<int>& a, const vector<int>& b) {
	vector<int> ans;
	int lena = a.size();
	int lenb = b.size();
	int temp = 0;
	for (int i = 0; i < lena; i++) {
		int x = 0;//进位
		for (int j = 0; j < lenb; j++) {
			temp = a[i] * b[j] + x;//乘运算
			//将计算结果存在ans中
			if ((i + j) >= ans.size()) {
				ans.push_back(temp % 10);
			} else {
				temp += ans[i + j];
				ans[i + j] = temp % 10;
			}
			x = temp / 10;//计算进位
		}
		if (x) ans.push_back(x);//进位
	}
	return ans;
}

vector<int> pow_mai(int n) {//计算$2^n$
	vector<int> ans = {2};
	for (int i = 1; i < n; i++) {
		ans = cheng(ans, {2});
	}
	return ans;
}

void vprintf(vector<int> a) {//倒序打印a中的数字
	vector<int>::reverse_iterator it = a.rbegin();
	for (it; it != a.rend(); it++) {
		cout << *it;
	}
	cout << endl;
}

void print(vector<int> a) {
	int cnt = 0;//计算是否换行
	int idx = 0;//计算500后
	if (a.size() > 500) idx = a.size() - 500;
	
	// 如果长度不够500，打印0
	for (int i = a.size(); i < 500; i++) {
		cout << 0;
		cnt = (cnt + 1) % 50;
		if (cnt == 0) cout << endl;
	}
	// 倒序打印
	for (auto iter = a.rbegin() + idx; iter != a.rend(); iter++) {
		cout << *iter;
		cnt = (cnt + 1) % 50;
		if (cnt == 0) cout << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> a = pow_mai(n);//计算$2^n$
	a[0]--;//$2^n - 1$
	cout << a.size() << endl;//输出位数
	print(a);//打印结果
	//vprintf(a);
	return 0;
}
