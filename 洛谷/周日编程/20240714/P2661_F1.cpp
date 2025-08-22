#include <bits/stdc++.h>

const int MAXN = (2E+6 + 10);
using namespace std;

struct EDGE{
	int to;
};
/*
 * 这道题，我把思想转换为有向图的方式来解，
 * 由于每个结点只指向一个目标结点，所以这里只用了数组，没用vector
 * 这道题，就是查找有向图是否有循环，计算最小循环边的数量
 */
EDGE g_edge[MAXN];
// 结点是否已经被过
bool g_flag[MAXN];
//  深搜， from原结点， to 目标结点
int dfs(int from, int to, int cnt){
	// 是否已经目标点和原结点重合
	//printf("f:%d, t:%d \n ", from, to);
	if (from == to) return cnt;
	//printf("    flag %d\n", g_flag[to]);
	// 如果已经找过了，这里就退出查找
	if (g_flag[to] ) return -1;
	g_flag[to] = true;
	//printf("    to_to:%d ,cnt %d\n",  g_edge[to].to, cnt);
	// 继续向下寻找
	cnt = dfs(from, g_edge[to].to, cnt+1);
	// 完成后 把标志清除
	g_flag[to] = false;
	return cnt;
}

int main(){
	int n;
	int from;
	// 输入n，表示有几个结点
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		// 输入当前结点对应的结点号
		cin >> from;
		g_edge[i].to = v;
	}
	int cnt, ans = -1;
	for (int i = 1; i <= n; i++){
		// 清楚结点标志
		//memset(g_flag, 0, sizeof(g_flag));
		cnt = dfs(i, g_edge[i].to, 1);
		//printf("%d => %d\n", i, cnt );
		// 如果返回-1，没有找到循环边数
		if (cnt == -1) continue;
		//  如果ans还是初始状态，这里直接赋值
		if (ans == -1) ans = cnt;
		// 如果找到，放入最小值
		ans = min(cnt, ans);
	}
	
	cout << ans;
	return 0;
}
