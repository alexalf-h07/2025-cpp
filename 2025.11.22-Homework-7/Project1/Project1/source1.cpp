#include<cstdio>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS
bool IsDigit(unsigned char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main(int argc, char** argv)
{
	unsigned char c = '\0';
	scanf_s("%d", &c);
	if (IsDigit(c))
	{
	   printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}