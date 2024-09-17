//PROGRAM TO PRINT TABLE OF ANY NO.
#include<stdio.h>
int main () {
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i = 1;i<11;i++){
        printf("%d x %d = %d\n",n,i,n*i); 
        }
        return 0;
    
}