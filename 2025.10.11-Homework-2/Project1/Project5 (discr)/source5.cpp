#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
    double a = 0;
    double b = 0;
    double c = 0;
    scanf_s("%lf %lf %lf", &a, &b, &c);
    double d = (b * b - 4 * a * c);
    if (a == 0)
    {
        if (b == c && b == 0)
        {
            printf("-1\n");
        }
        else if (b == 0 && c != 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n%lf\n", -c / b);
        }
    }
    else
    {
        if (d < 0)
        {
            printf("0\n");
        }
        else if (d == 0)
        {
            printf("1\n%lf\n", -b / (2 * a));
        }
        else
        {
            printf("2\n%lf\n%lf\n", (-b - sqrt(d)) / (2 * a), (-b + sqrt(d)) / (2 * a));
        }
    }
    return 0;
}
