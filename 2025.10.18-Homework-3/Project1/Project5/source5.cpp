#include<cstdio>

int main(int argc,char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    int current = 0;
    int max = 0;
    for (int i = 0; i < n; i++) 
    {
        int t = 0;
        scanf_s("%d", &t);
        if (t > 0)
        {
            current++;
            if (current > max) 
            {
                max = current;
            }
        }
        else
        {
            current = 0;
        }
    }
    printf("%d\n", max);
    return 0;
}