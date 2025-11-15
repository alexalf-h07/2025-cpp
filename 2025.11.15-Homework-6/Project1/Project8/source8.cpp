#include<cstdio>
double power(double a, int n) 
{
    double result = 1;
    while (n > 0) 
    {
        if (n % 2 == 1)
        {
            result *= a;
        }
        a *= a;
        n /= 2;
    }
    return result;
}
int main(int argc, char** argv)
{
    double a = 0;
    int n = 0;
    scanf_s("%lf %d", &a, &n);
    printf("%g", power(a, n));
    return 0;
}
