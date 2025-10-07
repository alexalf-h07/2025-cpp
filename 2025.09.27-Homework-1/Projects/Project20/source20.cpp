#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    printf("%d\n", (a - 1) * (b - 1) + 1);
    return 0;
}