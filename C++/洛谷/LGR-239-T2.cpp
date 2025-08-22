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
		
		char x, y;
		int z;
		
		if (x == 'A') {
			if (y == 'N' && z == 2) cout << "A320";
			else if (y == 'W' && z == 2) cout << "A350";
			else if (y == 'W' && z == 4) cout << "A380";
		} else if (x == 'B') {
			if (y == 'N' && z == 2) cout << "B737";
			else if (y == 'W' && z == 4) cout << "B747";
			else if (y == 'W' && z == 2) cout << "B787";
		} else if (x == 'C') {
			if (y == 'N' && z == 2) cout << "C919";
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
