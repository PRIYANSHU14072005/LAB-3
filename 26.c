// PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
#include <stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0, i ;
    printf("enter the value of n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 += i;
        }
        else
        {
            sum2 += i;
        }
    }
    printf("the sum of even numbers are %d\n", sum1);
    printf("sum of odd numbers are %d\n", sum2);
    return 0;
}
