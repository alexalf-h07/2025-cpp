#include<cstdio>
#include<cmath>
#define SIZE 1000

int main(int argc, char** argv)
{
	int  n = 0;
	scanf_s("%d", &n);
	int arr[SIZE];
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &x);
	int b = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (abs(arr[i] - x) < abs(b - x) || abs(arr[i] - x) == abs(b - x) && arr[i] < b)
		{
			b = arr[i];
		}
	}
	printf("%d", b);
	return 0;
}