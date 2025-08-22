//û��,TLE
#include <iostream>
#include <vector>

using namespace std;

vector<int> cheng(const vector<int>& a, const vector<int>& b) {
	vector<int> ans;
	int lena = a.size();
	int lenb = b.size();
	int temp = 0;
	for (int i = 0; i < lena; i++) {
		int x = 0;//��λ
		for (int j = 0; j < lenb; j++) {
			temp = a[i] * b[j] + x;//������
			//������������ans��
			if ((i + j) >= ans.size()) {
				ans.push_back(temp % 10);
			} else {
				temp += ans[i + j];
				ans[i + j] = temp % 10;
			}
			x = temp / 10;//�����λ
		}
		if (x) ans.push_back(x);//��λ
	}
	return ans;
}

vector<int> pow_mai(int n) {//����$2^n$
	vector<int> ans = {2};
	for (int i = 1; i < n; i++) {
		ans = cheng(ans, {2});
	}
	return ans;
}

void vprintf(vector<int> a) {//�����ӡa�е�����
	vector<int>::reverse_iterator it = a.rbegin();
	for (it; it != a.rend(); it++) {
		cout << *it;
	}
	cout << endl;
}

void print(vector<int> a) {
	int cnt = 0;//�����Ƿ���
	int idx = 0;//����500��
	if (a.size() > 500) idx = a.size() - 500;
	
	// ������Ȳ���500����ӡ0
	for (int i = a.size(); i < 500; i++) {
		cout << 0;
		cnt = (cnt + 1) % 50;
		if (cnt == 0) cout << endl;
	}
	// �����ӡ
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
	vector<int> a = pow_mai(n);//����$2^n$
	a[0]--;//$2^n - 1$
	cout << a.size() << endl;//���λ��
	print(a);//��ӡ���
	//vprintf(a);
	return 0;
}
