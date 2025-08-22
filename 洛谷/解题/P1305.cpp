#include <iostream>

using namespace std;

struct TreeNode {//声明结构体
	char val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
} head;

TreeNode* find_tree(char w, TreeNode* node = &head) {//查找二叉树中w的位置
	if (node -> val == w) return node;//如果找到
	TreeNode* ans = 0;
	if (node -> left != nullptr) ans = find_tree(w, node -> left);//搜索左子树
	if (ans) return ans;//如果找到
	if (node -> right != nullptr) ans = find_tree(w, node -> right);//搜索右子树
	return ans;
}

void qianxu(TreeNode* node) {
	if (node == nullptr) return ;
	cout << node -> val;
	qianxu(node -> left);
	qianxu(node -> right);
}

int main() {
	ios::sync_with_stdio(false);
	int n;//输入n行
	cin >> n;
	char a[4];//存储输入数据
	char gen, left, right;//根结点，左子树，右子树
	cin >> a;
	gen = a[0];
	left = a[1];
	right = a[2];
	head.val = gen;
	if (left != '*') head.left = new TreeNode(left);//创建左子树
	if (right != '*') head.right = new TreeNode(right);//创建右子树
	TreeNode* p;
	p = &head;
	for (int i = 1; i < n; i++) {
		cin >> a;
		gen = a[0];
		left = a[1];
		right = a[2];
		TreeNode* p = find_tree(gen);//查找根结点
		if (left != '*') p -> left = new TreeNode(left);//创建左子树
		if (right != '*') p -> right = new TreeNode(right);//创建右子树
	}
	qianxu(&head);//前序遍历
	return 0;
}
