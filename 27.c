//PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
#include <stdio.h>
int main()
{
    int n,i ,prime;
    printf("enter the value of n :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
    if(n%i==0 &&n!=2){
    prime=1;
    }
    }
        if (prime=1)
        {
            printf(" prime\n");
        }
        else
        {
            printf("  notprime\n");
        }
    
    return 0;
}

