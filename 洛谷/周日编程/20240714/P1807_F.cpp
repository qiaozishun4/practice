#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1500 + 10;
const int _INF_MIN = -1E+6;
typedef struct _EDGE{
	int to, cost;
}EDGE;

// 保存无向图，用邻接表的方式
vector<EDGE> g_arrVcEdge[MAXN];
bool g_arrFlag[MAXN];
int g_arrValDat[MAXN];
// 深搜 输入目标点
int dfs(int from, int to, int val){
	printf("from :%d to %d, val:%d, flag%d\n", from, to, val, g_arrFlag[from]);
	if (g_arrValDat[from] > val || from == to) return g_arrValDat[from];
	
	g_arrFlag[from] = true;
	int maxCost = _INF_MIN;
	int fromTo;
	for (int i = 0; i < g_arrVcEdge[from].size(); i++){
		//   这点已经找过了 就不进行下一步查找
		if ( (g_arrVcEdge[from][i].cost+val) < g_arrValDat[g_arrVcEdge[from][i].to]) continue;
		g_arrValDat[g_arrVcEdge[from][i].to] = max(g_arrValDat[g_arrVcEdge[from][i].to], dfs(g_arrVcEdge[from][i].to, to, g_arrVcEdge[from][i].cost+val));
	}
	return g_arrValDat[to];
}
void Print_grap(int n){
	for (int i = 1; i <= n; i++){
		for (auto x : g_arrVcEdge[i]){
			printf("to %d, cost %d | ", x.to, x.cost);
		}
		printf("\n");
	}
}
int readData_file()
{
	ifstream in_file("P1807_1.in");
	if (!in_file.is_open()){
		cout << "open file fail" << endl;
		getchar();
		exit(0);
	}
	int n, lineNum;
	// 输入结点数量 和后面输入的行的数量
	in_file >> n >> lineNum;
	// u  代表原点， v 目标点， w 边权
	int u, v, w;
	for (int i = 0; i < lineNum; i++){
		in_file >> u >> v >> w;
		//  原点和目标点 各自记录一分，因为时无向图
		g_arrVcEdge[u].push_back({v, w});
		g_arrVcEdge[v].push_back({u, w});
	}
	//printf("%d\n", n);
	//Print_grap(n);
	return n;
}
int readData(){
	int n, lineNum;
	// 输入结点数量 和后面输入的行的数量
	cin >> n >> lineNum;
	// u  代表原点， v 目标点， w 边权
	int u, v, w;
	for (int i = 0; i < lineNum; i++){
		cin >> u >> v >> w;
		//  原点和目标点 各自记录一分，因为时无向图
		g_arrVcEdge[u].push_back({v, w});
		g_arrVcEdge[v].push_back({u, w});
	}
	//Print_grap(n);
	return n;
}
int main(){
	int n = readData();
	//return 0;
	// n个结点

//	// 返回值初始化
	int ans = _INF_MIN;
	ans = dfs(1, n, 0);
	cout << g_arrValDat[n];
	
	return 0;
}
