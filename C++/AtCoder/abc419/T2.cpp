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
		int q;
		cin >> q;
		priority_queue<int, vector<int>, greater<int>> minn;
		
		while (q--) {
			int t;
			cin >> t;
			if (t == 1) {
				int x;
				cin >> x;
				minn.push(x);
			} else if (t == 2) {
				cout << minn.top() << endl;
				minn.pop();
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
