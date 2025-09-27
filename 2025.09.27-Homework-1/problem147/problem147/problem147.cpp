#include <stdio.h>

int main(int argc, char** argv) {
    long long A;
    scanf_s("%lld", &A);
    printf("%lld25\n", (A / 10) * (A / 10 + 1));
    return 0;
}
