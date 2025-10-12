#include<cstdio>

int main(int argc,char** argv)
{
    int x1 = 0;
    int y1 = 0; 
    int x2 = 0; 
    int y2 = 0;
    scanf_s("%d %d", &x1, &y1);
    scanf_s("%d %d", &x2, &y2);
    if (x1 != x2 || y1 < 2)
    {
        printf("NO");
        return 0;
    }
    if (y2 <= y1)
    {
        printf("NO");
        return 0;
    }
    if (y2 == y1 + 1)
    {
        printf("YES");
    }
    else if (y1 == 2 && y2 == 4)
    {
        printf("YES");
    }
    else if (y1 == 2 && y2 == 3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
