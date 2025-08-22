#include <iostream>

using namespace std;

struct TreeNode {
	char val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
} head;

TreeNode* find_tree(char w, TreeNode* node = &head) {
	if (node -> val == w) return node;
	TreeNode* ans = 0;
	if (node -> left) ans = find_tree(w, node -> left);
	if (ans) return ans;
	if (node -> right) ans = find_tree(w, node -> right);
	return ans;
}

void qianxu(TreeNode* node) {
	if (node == nullptr) return ;
	cout << node -> val;
	qianxu(node -> left);
	qianxu(node -> right);
}

int main() {
	int n;//输入n行
	cin >> n;
	char a[4];//存储输入数据
	char gen, left, right;
	cin >> a;
	gen = a[0];
	left = a[1];
	right = a[2];
	head.val = gen;
	if (left != '*') head.left = new TreeNode(left);
	if (right != '*') head.right = new TreeNode(right);
	TreeNode* p;
	p = &head;
	for (int i = 1; i < n; i++) {
		cin >> a;
		gen = a[0];
		left = a[1];
		right = a[2];
		TreeNode* p = find_tree(gen);
		if (left != '*') p -> left = new TreeNode(left);
		if (right != '*') p -> right = new TreeNode(right);
	}
	qianxu(&head);
	return 0;
}
