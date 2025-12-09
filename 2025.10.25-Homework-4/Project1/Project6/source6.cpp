#include<cstdio>
#include<cmath>
#define SIZE 1000

int main(int argc, char** argv)
{
	int  n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d%d%d%d%d", &n, &a, &b, &c, &d);
	int arr[SIZE] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < (b - a + 1) / 2; i++)
	{
		int t = arr[a + i];
		arr[a + i] = arr[b - i];
		arr[b - i] = t;
	}
	for (int i = 0; i < (d - c + 1) / 2; i++)
	{
		int t = arr[c + i];
		arr[c + i] = arr[d - i];
		arr[d - i] = t;
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d", arr[i]);
		if (i < n) 
		{
			printf(" ");
		}
	}
	return 0;
}