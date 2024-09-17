//PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include <stdio.h>
int main()
{
    int n, i, x, y;
    printf("enter the value of n :");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        i = n % 10;

        y = printf("%d", i);
        n /= 10;
    }

    if (y = x)
    {
        printf("\n%d is a palindrom number", y);
    }
    else
    {
        printf("\n%d is not a palindrom number", y);
    }
    return 0;
}