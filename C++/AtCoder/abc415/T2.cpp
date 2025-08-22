#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	struct bag {
		int num;
		vector<int> val;
	};
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		string s;
		cin >> s;
		int n = s.size();
		bag cnt = {0,{}};
		for (int i = 1; i <= n; i++) {
			if (s[i] == '#') {
				cnt.num++;
				cnt.val.push_back(i);
				s[i] = '.';
				if (cnt.num >= 2) {
					cnt.num = 0;
					cout << cnt.val[0] + 1 << ',' << cnt.val[1] + 1 << endl;
					//cnt.val.swap(vector<int> a());
					vector<int>().swap(cnt.val);
				}
			}
		}
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
