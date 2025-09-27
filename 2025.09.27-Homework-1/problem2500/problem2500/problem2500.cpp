#include<cstdio>

int main(int argc, char** argv)
{
	int K = 0;
	int N = 0;
	scanf_s("%d %d", &K, &N);
	int column = (N - 0.01) / K + 1;
	int line = (N- 0.01) / K;
	line = N - line * K;
	printf("%d %d", column, line);
	return 0;
}