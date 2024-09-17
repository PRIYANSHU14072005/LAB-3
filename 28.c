//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i = 0, count = 0, sum = 0, y, x;
    printf("emter the number : ");
    scanf("%d", &n);
    y = x = n;
    while (n > 0)
    {
        i = n % 10;
        count += 1;
        n /= 10;
    }
    printf("%d", count);
    while(x > 0)
    {
        i = x % 10;
        sum += pow(i, count);
        x /= 10;
    }
    if (sum == y)
    {
        printf("\n%d is a armstrong number", y);
    }
    else
    {
        printf("\n%d is  not a armstrong number", y);
    }
    return 0;
}