#include <iostream>
#include <string>

using namespace std;

void qianxu(string s1, string s2) {//s1中序,s2后序
	if (s1.size() == 0) return ;//出口
	int k = s1.find(s2.back());//寻找根结点
	cout << s2.back();//打印根结点
	qianxu(s1.substr(0, k), s2.substr(0, k));//处理左子树
	qianxu(s1.substr(k + 1), s2.substr(k, s1.size() - k - 1));//处理右子树
}

int main() {
	ios::sync_with_stdio(false);
	string s1, s2;
	cin >> s1 >> s2;
	qianxu(s1, s2);
	return 0;
}
