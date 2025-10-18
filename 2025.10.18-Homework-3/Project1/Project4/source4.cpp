#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int max = 0;  //максимальное
    int maxv2 = 0;// второе максимальное
    do {
        scanf_s("%d", &n);
        if (n != 0)
        {
            if (n > max) 
            {
                maxv2 = max;
                max = n;
            }
            else if (n > maxv2)
            {
                maxv2 = n;
            }
        }
    } while (n != 0);
    printf("%d\n", maxv2);
    return 0;
}