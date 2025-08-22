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
		string S;
		cin >> S;
		
		map<string, string> words_map = {
			{"red", "SSS"},
			{"blue", "FFF"},
			{"green", "MMM"},
		};
		
		set<string> known_words = {"red", "blue", "green"};
		
		if (known_words.find(S) != known_words.end()) {
			cout << words_map[S];
		} else {
			cout << "Unknown";
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
