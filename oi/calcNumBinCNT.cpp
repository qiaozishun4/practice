#include <stdio.h>

int main(){
	unsigned int a;// 1 0001 & 1
	scanf("%u", &a);
	// 4119839245
	// 0xF58FC20D
	int bk_a = a;
	// 17 10001 >> 1 1000
	// 
	a = (a & 0x55555555) + ((a & 0xaaaaaaaa) >> 1);
	a = (a & 0x33333333) + ((a & 0xCCCCCCCC) >> 2);
	a = (a & 0x0F0F0F0F) + ((a & 0xF0F0F0F0) >> 4);
	a = (a & 0x00FF00FF) + ((a & 0xFF00FF00) >> 8);
	a = (a & 0x0000FFFF) + ((a & 0xFFFF0000) >> 16);
//	while (a != 0)
//	{
//		cnt += (a & 0x80000000 ? 1 : 0);
//		///printf("%d, %d\n", a, cnt);
//		a <<= 1;
//	}
	
	printf("%u : %d\n", bk_a, a);
	return 0;
}

