#include <bits/stdc++.h>

using namespace std;

string g_arrX[5] = {
	"剪刀", "石头", "布", "蜥蜴人", "斯波特"
};

string g_arrY[3] = {
	"平", "赢", "输"
};

int cmpAB(int a, int b) // 1 aV, 2 bV, 0 a,b 0
{
	if (a == b) return 0;
	if ((a == 0) && (b==1)) return 2; // 剪刀对石头
	if ((a == 1) && (b==0)) return 1; // 剪刀对石头
		
	if (((a == 0) && (b==2))) return 1; // 剪刀对布
	if (((a == 2) && (b==0))) return 2; // 剪刀对布
		
	if (((a == 0) && (b==3))) return 1; // 剪刀对蜥蜴人
	if (((a == 3) && (b==0))) return 2; // 剪刀对蜥蜴人
		
	if (((a == 0) && (b==4))) return 2; // 剪刀对斯波克
	if (((a == 4) && (b==0))) return 1; // 剪刀对斯波克
		
		
	if ((a == 1) && (b==2)) return 2; // 石头对布
	if ((a == 2) && (b==1)) return 1; // 石头对布
		
	if (((a == 1) && (b==3))) return 1; // 石头对蜥蜴人
	if (((a == 3) && (b==1))) return 2; // 石头对蜥蜴人
		
	if (((a == 1) && (b==4))) return 2; // 石头对斯波克
	if (((a == 4) && (b==1))) return 1; // 石头对斯波克
		
		
	if (((a == 2) && (b==3))) return 2; // 布对蜥蜴人
	if (((a == 3) && (b==2))) return 1;
		
	if (((a == 2) && (b==4))) return 1; // 布对斯波克
	if (((a == 4) && (b==2))) return 2; // 布对斯波克
		
		
	if (((a == 3) && (b==4))) return 1; // 蜥蜴人对斯波克
	if (((a == 4) && (b==3))) return 2; // 蜥蜴人对斯波克

	return 0;
}

int g_arrA[202];
int g_arrB[202];
int main()
{
	int n, n_a, n_b;
	int result;
	
	cin >> n >> n_a >> n_b;
	
	for (int i = 0; i < n_a; i++) cin >> g_arrA[i];
	for (int i = 0; i < n_b; i++) cin >> g_arrB[i];
	int aV = 0, bV = 0;
	for (int i = 0; i < n; i++)
	{
		result = cmpAB(g_arrA[i%n_a], g_arrB[i%n_b]);
		//printf("%d, a=%s, b=%s, r=%s\n", i, g_arrX[g_arrA[i%n_a]].c_str(), g_arrX[g_arrB[i%n_b]].c_str(), g_arrY[result].c_str());
		switch (result)
		{
			case 1: aV++; break;
			case 2: bV++; break;
		}
	}
	
	cout << aV << " " << bV << endl;
	
	return 0;
}
