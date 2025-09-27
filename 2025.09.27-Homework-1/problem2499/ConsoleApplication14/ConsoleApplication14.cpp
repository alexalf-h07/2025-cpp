#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int m = 0;
    scanf_s("%d %d", &n, &m);
    printf("%d\n", (n - 1) * (m - 1) + 1);
    return 0;
}