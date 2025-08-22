#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	struct TreeNode {
		int val;
		int par;
		vector<int> child;
	};
	vector<TreeNode> one, two;
	int n, k;
	
	void buildtwo() {
		two.resize(n + 1);
		for (int i = 1; i <= n; i++) {
			two[i].val = i;
		}
		
		for (int i = 0; i < n - 1; i++) {
			int u, v;
			cin >> u >> v;
			two[u].child.push_back(v);
			two[v].child.push_back(u);
		}
	}
	
	void pas(int &p, int &q) {
		int time = 0;
		vector<bool> v1(n + 1, false);
		vector<int> size_s(n + 1, 0);
		
		queue<int> q_tree;
		q_tree.push(1);
		v1[1] = true;
		
		while (!q_tree.empty()) {
			int front = q_tree.front();
			q_tree.pop();
			
			while (one[front].child.size() < k) {
				int new_id = one.size() + 1;
				one[front].child.push_back(new_id);
				one.push_back({new_id, front, {}});
			}
			
			if (two[front].child.size() != one[front].child.size()) {
				time++;
				int ex = one[front].child.size() - two[front].child.size();
				size_s[front] = ex;
			}
			
			for (int child : one[front].child) {
				if (!v1[child]) {
					v1[child] = true;
					q_tree.push(child);
				}
			}
		}
		p = time;
		q = accumulate(size_s.begin(), size_s.end(), 0);
	}
	
	int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		cin >> n >> k;
		buildtwo();
		one.push_back({1, -1, {}});
		int p = 0, q = 0;
		pas(p, q);
		cout << p << ' ' << q << endl;
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
