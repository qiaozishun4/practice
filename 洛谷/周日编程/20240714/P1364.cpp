#include <bits/stdc++.h>
#define MAX_N	102
using namespace std;

typedef struct _GRAPH_EDGE{
	int to, cost;
	_GRAPH_EDGE(int to=0, int cost=0):to(to),cost(cost){}
}GRAPH_EDGE, *PGRAPH_EDGE;

vector<vector<GRAPH_EDGE> > g_vcGE(MAX_N);

int g_arrArrGraph[MAX_N][MAX_N];
int g_arrVal[MAX_N];
#define _INF 	1E+6
int main()
{
	int n;
	int val, left, right;
	cin >> n;
	
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++) g_arrArrGraph[i][j] = _INF;
	}
	
	for (int i = 1; i <= n; i++)
	{
		cin >> val >> left >> right;
		g_arrArrGraph[i][i] = 0;
		g_arrArrGraph[i][left] =
		g_arrArrGraph[left][i] = 1;
		g_arrArrGraph[i][right] =
		g_arrArrGraph[right][i] = 1;
		g_arrVal[i] = val;
	}
	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("i=%d to j=%d len=%d, val %d\n", i, j, g_arrArrGraph[i][j], g_arrVal[i]);
//		}
//	}
//	
	for (int x = 1; x <= n; x++)
	{
		for (int i = 1; i <= n; i++)
		{
			if (x == i) continue;
			for (int j = 1; j <= n; j++)
			{
				if (i != j && x != j && g_arrArrGraph[i][x] + g_arrArrGraph[x][j] < g_arrArrGraph[i][j])
				{ //  计算最短路径
					g_arrArrGraph[i][j] = g_arrArrGraph[i][x] + g_arrArrGraph[x][j];
				}
			}
		}
	}
	int ans = _INF;
	
	for (int i = 1; i <= n; i++)
	{
		val = 0;
		for (int j = 1; j <= n; j++)
		{ // 计算距离和
			val += g_arrArrGraph[i][j] * g_arrVal[j];
			//printf("i=%d to j=%d len=%d, val %d\n", i, j, g_arrArrGraph[i][j], g_arrVal[i]);
		}
		ans = min(val, ans);
	}
	printf("%d\n", ans);
	
	
	return 0;
}
