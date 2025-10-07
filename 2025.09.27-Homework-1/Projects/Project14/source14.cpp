#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf_s("%d %d", &n, &k);
    int a = k / n;
    int b = k % n;
    int c = (n - k % n) * (int)((k % n + n - 0.01) / n);
    printf("%d %d %d", a, b, c);
    return 0;
}
