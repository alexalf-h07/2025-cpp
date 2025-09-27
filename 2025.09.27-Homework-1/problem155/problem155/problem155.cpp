
#include <cstdio>

int main(int argc,char** argv)
{
    int num;
    scanf_s("%d", &num); 

    int a = num / 100;       
    int b = (num / 10) % 10; 
    int c = num % 10;        

    int sum = a + b + c;     

    printf("%d\n", sum);     
    return 0;
}
