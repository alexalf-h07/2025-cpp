#include<cstdio>

int main(int argc,char** argv) 
{
    int a = 0;
    int b = 0;
    int c = 0;
    int m = 0;
    int k = 0;
    int n = 0;
    scanf_s("%d %d %d %d %d %d", &a, &b, &c, &m, &k, &n);
    if (a > b) 
    {
        a = a + b; b = a - b; a = a - b;
    }
    if (a > c)
    {
        a = a + c; c = a - c; a = a - c; 
    }
    if (b > c) 
    {
        b = b + c; c = b - c; b = b - c;
    }
    if (m > k) 
    {
        m = m + k; k = m - k; m = m - k; 
    }
    if (m > n) 
    {
        m = m + n; n = m - n; m = m - n; 
    }
    if (k > n)
    {
        k = k + n; n = k - n; k = k - n; 
    }
    if (a == m && b == k && c == n)
    {
        printf("Boxes are equal\n");
    }
    else if (a <= m && b <= k && c <= n) 
    {
        printf("The first box is smaller than the second one\n");
    }
    else if ( m <= a && k <= b && n <= c)
    {
        printf("The first box is larger than the second one\n");
    }
    else 
    {
        printf("Boxes are incomparable\n");
    }
    return 0;
}
