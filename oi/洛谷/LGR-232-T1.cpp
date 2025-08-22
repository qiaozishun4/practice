#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);int cnt = 0, l1 = -1, l2 = -1;
		bool bwd = false, hcd = false;
		string s;
		getline(cin, s);
		int n = s.size();
		vector<int> ans;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (int i = 1; i <= n; i++) {
			char c = s[i - 1];
			if (i == 1 && c == '.') bwd = true;
			if (c == '.') {
				if (i >= 2 && s[i - 2] == '.') hcd = true;
				cnt++;
				l2 = l1;
				l1 = i - 1;
			}
			bool flag = false;
			if (bwd || c == '.') flag = true;
			else if (hcd || cnt < 1) flag = true;
			if (!flag && cnt >= 2) {
				int len = (i - 1) - l1;
				int len1 = l1 - l2 - 1;
				if (len == 2 && len1 == 3) if (s.substr(l1 + 1, 2) == "cn" && s.substr(l2 + 1, 3) == "edu") ans.push_back(i);
			}
		}
		for (int i = 0; i < ans.size(); i++) {
			if (i > 0) cout << ' ';
			cout << ans[i];
		}
		cout << endl;
		return 0;
	}
};

int main() {
	/**
	 * Made By RealDream
	 */
	RealDream::main();
	return 0;
}
