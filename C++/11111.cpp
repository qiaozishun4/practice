#include <stdio.h>

int main()
{
	int a = 1;
	switch (a)
	{
	case 1:
	{
		int cnt = 10;
		for (int x = 0; x < 2; x++) cnt += x;
		printf("%d\n", cnt);
		break;
	}
	case 2:
		break;
	default:
		break;
	}

    return 0;
}
