#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	int florr(int n) {
		if (n > 100) return n / 100;
		else return n;
	}
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		vector<int> money(17);
		int mon = 0;
		for (int i = 1; i <= 12; i++) {
			cin >> money[i];
			mon = mon + (300 - money[i]);
			if (mon < 0) {
				cout << -i << endl;
				break;
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
