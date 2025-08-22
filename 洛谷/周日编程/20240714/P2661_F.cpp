#include <bits/stdc++.h>

const int MAXN = (2E+5 + 10);

using namespace std;

set<int> g_setData[MAXN];
set<int> g_setData_new[MAXN];
int g_dest[MAXN];
int g_size;
// 打印结点，用于调试使用
void PrintSet()
{
	for (int i = 1; i <= g_size; i++) cout << g_dest[i] << " ";
	cout << endl;
	
	for (int i = 1; i <= g_size; i++)
	{
		printf("%d -> ", i);
		for (auto x : g_setData[i])
		{
			printf("%d ", x);
		}
		printf("\n");
	}
}
int main()
{
	int  to;
	cin >> g_size;
	int cnt = 1;
	for (int i = 1; i <= g_size; i++)
	{
		cin >> to;
		// 存储目标结点
		g_dest[i] = to;
		// 插入到set中，用于后面的运算
		g_setData[i].insert(i);
	}
	
	bool bFind = false;
	while (!bFind)
	{
		// 计次数
		cnt ++;
		for (int i = 1; i <=g_size; i++)
		{ // 把本次信息让如到新的set中
			g_setData_new[g_dest[i]].insert(g_setData[i].begin(), g_setData[i].end());
		}
		
		for (int i = 1; i <=g_size; i++)
		{ // 把新的信息再插入回原来的set中
			g_setData[i].insert(g_setData_new[i].begin(), g_setData_new[i].end());
			if (g_setData[i].find(g_dest[i]) != g_setData[i].end())
			{ // 查找有没有本结点的信息，如果有，推出循环，找到了。
				bFind = true;
				break;
			}
		}
		//PrintSet();
		//getchar();
	}
	
	cout << cnt ;
	
	return 0;
}
