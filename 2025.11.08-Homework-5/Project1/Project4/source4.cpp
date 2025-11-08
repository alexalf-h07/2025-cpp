#include<cstdio>
#include<cstdlib>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		return 1;
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		if ((arr[i] > arr[i - 1]))
		{
			count++;
		}
	}
	printf("%d", count);
	free(arr);
	return 0;
}