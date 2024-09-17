//PROGRAM TO REVERSE OF A GIVEN NO
#include <stdio.h>
int main()
{
    int n, i, x,y ;
    printf("enter the value of n :");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        i = n % 10;

        y=printf("%d", i);
        n /= 10;
    }
    printf(" is reverse of input number");
    return 0;
}
