#include <bits/stdc++.h>

const int MAXN = (2E+6 + 10);
using namespace std;

struct EDGE{
	int to;
};
/*
 * ����⣬�Ұ�˼��ת��Ϊ����ͼ�ķ�ʽ���⣬
 * ����ÿ�����ָֻ��һ��Ŀ���㣬��������ֻ�������飬û��vector
 * ����⣬���ǲ�������ͼ�Ƿ���ѭ����������Сѭ���ߵ�����
 */
EDGE g_edge[MAXN];
// ����Ƿ��Ѿ�����
bool g_flag[MAXN];
//  ���ѣ� fromԭ��㣬 to Ŀ����
int dfs(int from, int to, int cnt){
	// �Ƿ��Ѿ�Ŀ����ԭ����غ�
	//printf("f:%d, t:%d \n ", from, to);
	if (from == to) return cnt;
	//printf("    flag %d\n", g_flag[to]);
	// ����Ѿ��ҹ��ˣ�������˳�����
	if (g_flag[to] ) return -1;
	g_flag[to] = true;
	//printf("    to_to:%d ,cnt %d\n",  g_edge[to].to, cnt);
	// ��������Ѱ��
	cnt = dfs(from, g_edge[to].to, cnt+1);
	// ��ɺ� �ѱ�־���
	g_flag[to] = false;
	return cnt;
}

int main(){
	int n;
	int from;
	// ����n����ʾ�м������
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		// ���뵱ǰ����Ӧ�Ľ���
		cin >> from;
		g_edge[i].to = v;
	}
	int cnt, ans = -1;
	for (int i = 1; i <= n; i++){
		// �������־
		//memset(g_flag, 0, sizeof(g_flag));
		cnt = dfs(i, g_edge[i].to, 1);
		//printf("%d => %d\n", i, cnt );
		// �������-1��û���ҵ�ѭ������
		if (cnt == -1) continue;
		//  ���ans���ǳ�ʼ״̬������ֱ�Ӹ�ֵ
		if (ans == -1) ans = cnt;
		// ����ҵ���������Сֵ
		ans = min(cnt, ans);
	}
	
	cout << ans;
	return 0;
}
