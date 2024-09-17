/* WRITE A C PROGRAM TO FIND THE VALUE OF Y USING

Y(x,n) =1+x where n=1
Y(x,n) =1+x/n where n=2
Y(x,n) =1 +xn when n=3
Y(x,n) =1 + nx when n>3 or n<1 */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float x, y;
    printf("eneter the value of n : ");
    scanf("%d", &n);
    printf("eneter the value of x : ");
    scanf("%f", &x);
    if (n == 1)
    {
        printf("the value of y is %f", 1 + x);
    }

    else if (n == 2)
    {
        printf("the value of y is %f ", 1 + x / n);
    }
    else if (n == 3)
    {
        printf(" the value of y is %f ", 1 + pow(x, n));
    }
    else if (n > 3 || n < 1)
    {
        printf("the value of y is %f ", 1 + n * x);
    }
    return 0;
}