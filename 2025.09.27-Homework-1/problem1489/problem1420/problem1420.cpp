#include<cstdio>

int main(int argc, char** argv)
{
	int n;
	int m;
	scanf_s("%d %d", &n, &m);
	printf("%lld", (long long int) (n - 1) * (m - 1) + 1);
	return 0;
}