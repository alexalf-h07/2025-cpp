#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	long float x = 0;
	long float y = 0;
	scanf_s("%lf %lf", &x, &y);
	int n = 1;
	while (x < y )
	{
		x *= 1.15;
			n++;
	}
	printf("%d", n );
		return 0;
}

