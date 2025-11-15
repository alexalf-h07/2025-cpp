#include<cstdio>

int min(int a, int b, int c, int d)
{
	int min = a;
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	if (d < min)
	{
		min = d;
	}
	return min;
}

int main(int argc, char** argv)
{

int a = 0;
int b = 0;
int c = 0;
int d = 0;
scanf_s("%d %d %d %d", &a, &b, &c, &d);
printf("%d", min(a, b, c, d));
return 0;
}