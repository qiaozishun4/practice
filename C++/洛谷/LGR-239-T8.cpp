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
		
		int n, m;
		cin >> n >> m;
		
		map<string, int> going;
		int bianhao = 1;
		for (int i = 0; i < m; i++) {
			int c;
			cin >> c;
			for (int j = 0; j < c; j++) {
				string code;
				cin >> code;
				going[code] = bianhao;
			}
			bianhao++;
		}
		
		set<tuple<int, string, string, string >> plain;
		
		for(int i = 0; i < n; i++) {
			string line;
			cin >> line;
			string code = line.substr(0, 2);
			string dep = line.substr(6, 3);
			string des = line.substr(10, 3);
			string time = line.substr(14, 5);
			
			int val;
			if (going.count(code)) val = going[code];
			else val = 1000 + i;
			
			plain.insert({val, dep, des, time});
		}
		
		cout << plain.size() << endl;
		
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
