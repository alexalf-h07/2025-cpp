#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	int r = -1;
	int maxk = 0;
	do {
		scanf_s("%d", &n);
		if (n == r)
		{
			++k;
		}
		else
		{
			if (k > maxk)
			{
				maxk = k;
			}
			k = 1;
			r = n;
		}
	} while (n != 0);

	if (k > maxk) maxk = k;
	printf("%d", maxk);

	return 0;
}