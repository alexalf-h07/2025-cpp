#include<cstdio>

int main(int argc, char** argv)
{
	int V = 0;
	int T = 0;
    scanf_s("%d %d", &V, &T);

	printf("%d",(V * T % 109 + 109) % 109 + 1);
	return 0;
}
