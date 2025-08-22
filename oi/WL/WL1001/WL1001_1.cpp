#include <iostream>
#include <string>

using namespace std;

void dfs(string num, int time, int val){
	if (time > num.size()) return;
	cout << num[time - 1];
	bool flag = false;
	if (time == val && val != 0) cout << ',', flag = true;
	if (num.size() == 1) flag = true;
	if ((time - val) % 3 == 0 && time + 1 > val && !flag && time != 0) cout << ',';
	dfs(num, ++time, val);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	if (s.size() <= 3) {
		cout << s << endl;
		return 0;
	}
	dfs(s, 0, s.size() % 3);
	cout << endl;
	return 0;
}
