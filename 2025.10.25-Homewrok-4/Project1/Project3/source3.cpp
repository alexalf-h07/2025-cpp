#include<cstdio>
#include<cmath>
#define SIZE 1000

int main(int argc, char** argv)
{
	int  n = 0;
	scanf_s("%d", &n);
	int arr[SIZE] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int l = 0;
	int r = 0;
	scanf_s("%d%d", &l, &r);
	int max = arr[l];
	int indeks = l;
	for (l; l < r; l++)
	{
		if (arr[l] > max)
		{
			max = arr[l];
			indeks = l;
		}
	}
	printf("%d %d", arr[indeks], indeks + 1);
	return 0;
}