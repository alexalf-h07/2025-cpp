#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	if (((a / 100000) % 10) + ((a / 10000) % 10) + ((a / 1000) % 10) == ((a / 100) % 10) + ((a / 10) % 10) + ((a / 1) % 10))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
