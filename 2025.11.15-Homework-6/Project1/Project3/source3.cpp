#include<cstdio>

bool Election(bool x, bool y, bool z)
{
	int i = 0;
	if(x)
	{
		i++;
	}
	if (y)
	{
		i++;
	}
	if (z)
	{
		i++;
	}
	return i >= 2;
}
int main(int argc, char** argv)
{
	int x = 0;
	int y = 0;
	int z = 0;
	scanf_s("%d %d %d", &x, &y, &z);
	bool result = Election(x, y, z);
	printf("%d", result);
	return 0;
}