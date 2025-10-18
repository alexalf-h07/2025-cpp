#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int z = a * b;
	if (b > a)
	{
		int t = a;
		a = b;
		b = t;
	}
	int r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("%d", z / b);
	return 0;
}