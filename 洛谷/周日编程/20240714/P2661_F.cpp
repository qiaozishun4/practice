#include <bits/stdc++.h>

const int MAXN = (2E+5 + 10);

using namespace std;

set<int> g_setData[MAXN];
set<int> g_setData_new[MAXN];
int g_dest[MAXN];
int g_size;
// ��ӡ��㣬���ڵ���ʹ��
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
		// �洢Ŀ����
		g_dest[i] = to;
		// ���뵽set�У����ں��������
		g_setData[i].insert(i);
	}
	
	bool bFind = false;
	while (!bFind)
	{
		// �ƴ���
		cnt ++;
		for (int i = 1; i <=g_size; i++)
		{ // �ѱ�����Ϣ���絽�µ�set��
			g_setData_new[g_dest[i]].insert(g_setData[i].begin(), g_setData[i].end());
		}
		
		for (int i = 1; i <=g_size; i++)
		{ // ���µ���Ϣ�ٲ����ԭ����set��
			g_setData[i].insert(g_setData_new[i].begin(), g_setData_new[i].end());
			if (g_setData[i].find(g_dest[i]) != g_setData[i].end())
			{ // ������û�б�������Ϣ������У��Ƴ�ѭ�����ҵ��ˡ�
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
