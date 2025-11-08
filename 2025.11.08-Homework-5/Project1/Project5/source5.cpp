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

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < n - 1; i++)
	{
		if ((arr[i] > 0 && arr[i + 1] > 0) || (arr[i] < 0 && arr[i + 1] < 0))
		{
			printf("YES");
		}
	}
	printf("NO");
	free(arr);
	return 0;
}