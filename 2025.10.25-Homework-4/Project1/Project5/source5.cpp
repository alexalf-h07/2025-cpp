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
	for (int i = 1; n >= i; n--)
	{
		printf("%d ", arr[n - 1]);
	}
	return 0;
}