#include<cstdio>

int main(int argc,char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    if (n == 0)
    {
        printf("0\n");
        return 0;
    }
    else if (n == 1)
    {
        printf("1\n");
        return 0;
    }
    int a = 0;
    int b = 1;
    int s = 0;
    int i = 2;
    while (i <= n)
    {
        s = a + b;
        a = b;
        b = s;
        i++;
    }
    printf("%d\n", b);
    return 0;
}