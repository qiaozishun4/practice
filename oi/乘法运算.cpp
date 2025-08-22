#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int ArrCharToInt(char arr[], int arrInt[])
{
	int len = strlen(arr);
	for (int i = 0; i < len; i++) arrInt[i] = arr[len - i - 1] - '0';
	return len;
}

void PrintInt(int arrInt[], int lenArr){
	for (int i = 0; i < lenArr; i++){
		cout<<arrInt[lenArr - i - 1];
	}
	printf("\n");
}

int main(){
	char a1[1001] = {}, b1[1001] = {};
	int a[1000] = {}, b[1001] = {}, c[1001] = {};
	cin >> a1 >> b1;
	int lena = ArrCharToInt(a1, a);
	int lenb = ArrCharToInt(b1, b);
	int lenc;

	for (int i = 0; i < lenb; i++)
	{
		lenc = i;
		for (int j = 0; j < lena; j++)
		{
			c[lenc] += a[j] * b[i];
			c[lenc + 1] = c[lenc] / 10;
			c[lenc++] %= 10;
		}
	}
	
	if (c[lenc] != 0) lenc++;
	PrintInt(c, lenc);
	
	return 0;
}
