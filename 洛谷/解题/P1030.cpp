#include <iostream>
#include <string>

using namespace std;

void qianxu(string s1, string s2) {//s1����,s2����
	if (s1.size() == 0) return ;//����
	int k = s1.find(s2.back());//Ѱ�Ҹ����
	cout << s2.back();//��ӡ�����
	qianxu(s1.substr(0, k), s2.substr(0, k));//����������
	qianxu(s1.substr(k + 1), s2.substr(k, s1.size() - k - 1));//����������
}

int main() {
	ios::sync_with_stdio(false);
	string s1, s2;
	cin >> s1 >> s2;
	qianxu(s1, s2);
	return 0;
}
