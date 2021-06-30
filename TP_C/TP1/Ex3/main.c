#include "header.h"

int main()
{
    int n;
    scanf("%d", &n);
    int result3 = isprime(n);
    printf("%d\n" , result3);
    getprime(n);
    int result5 = isprime(n);
    printf("%d\n" , result5);
    return 0;
}
