#include<cstdio>

int main(int argc, char** argv)
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
	if ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) == 5)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}