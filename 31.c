// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include <stdio.h>
int main()
{
    int n, i, x, count;
    printf("enter the value of n :");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        i = n % 10;
        count += i;

        n /= 10;
    }
    printf("the sum of indivisual digit is %d",count);
    return 0;
}