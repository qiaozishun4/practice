#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	int sum = 0, ans = 0;
	// ѭ��8�Σ�����9��
	for (int i = 0; i < 8; i++) {
		if (s[i - sum] == '-') {
			++sum;
			continue;
		} else if (s[i - sum] == 'X') {
			// ���� X
			ans = ans + 10 * (1 + i - sum);
		}
		ans = ans + s[i - sum] * (1 + i - sum);
	}
	ans %= 11;
	if (ans == 10) {
		clog << "came in" << endl;
		clog << ans << endl;
		ans = 'X' - '0';
		clog << ans << endl;
	}
	clog << "didn't get in or came out" << endl;
	string temp = s;
	temp.back() = char(ans + '0');
	if (temp == s) cout << "Right" << endl;
	else cout << temp << endl;
	return 0;
}
