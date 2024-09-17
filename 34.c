//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
#include <stdio.h>
int main()
{
    int n, i, x,y, count;
    printf("enter the limit :");
    scanf("%d", &n);
    for(int i =0;i<=n;i++){
        x=i;
        y=i-i;
        count=x+y;
        if(count<0)
        continue;
        printf("%d,",count);
    }
    return 0;
}