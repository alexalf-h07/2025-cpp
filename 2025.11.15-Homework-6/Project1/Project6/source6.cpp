#include<cstdio>

int phi(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return phi(n - 1) + phi(n - 2);
}

int main(int argc,char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);
    printf("%d", phi(n));
    return 0;
}