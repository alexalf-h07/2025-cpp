#include<cstdio>
#include<math.h>

int delimost(long long n) 
{
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    long long l = sqrt(n);
    for (long long i = 3; i <= l; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char** argv)
{
    long long n = 0;
    scanf_s("%lld", &n);
    if (delimost(n))
    {
        printf("prime\n");
    }
    else 
    {
        printf("composite\n");
    }
    return 0;
}