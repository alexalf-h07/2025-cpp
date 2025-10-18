#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int i = 0;
	for (int x = -100; x <= 100; x++)
	{
		long long result = (long long)a * x * x * x + (long long)b * x * x + (long long)c * x + (long long)d;
		if (result == 0)
		{
			if (i > 0)
			{
				printf(" ");
			}
			printf("%d", x);
			i++;
		}
	}
	return 0;
}