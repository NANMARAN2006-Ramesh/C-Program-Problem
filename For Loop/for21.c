#include <stdio.h>

int main()
{
    int n,base=1;
    scanf("%d", &n);
    int rem;
    int sum =0;
    for (; n > 0; n = n / 10){
        rem = n%10;
        sum += rem*base;
        base*=2;
    }
    printf("%d", sum);
    return 0;
}