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
		cout.tie(nullptr);
		int n;
		cin >> n;
		vector<int> p(n);
		for (int i = 0; i < n; i++) cin >> p[i];
		
		int cnt = 0, putong = 0;
		for (int i = 0; i < n; i++) {
			if (p[i] == 1) break;
			cnt++;
			if (p[i] == 0) putong++;
		}
		
		cout << cnt << ' ' << putong << endl;
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
