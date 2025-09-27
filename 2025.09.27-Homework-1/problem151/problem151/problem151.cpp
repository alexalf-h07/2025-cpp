#include <stdio.h>

int main(int argc, char** argv)
{
    int a=0;
    scanf_s("%d", &a);
    printf("%d\n", (a + 9) / 10);
    return 0;
}