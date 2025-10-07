#include<cstdio>

int main(int argc, char** argv)
{
    int n;
    scanf_s("%d", &n);
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    int sum = a + b + c;
    printf("%d\n", sum);
    return 0;
}
