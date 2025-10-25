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
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
		printf("%d ", arr[i]);
	}
	return 0;
}