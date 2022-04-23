#include <stdio.h>
int main()
{
    int n,sum,remainder;
    printf("enter a number:\n");
    scanf("%d", &n);
    sum=0;
    while(n>0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n/=10;
    }  
    printf("the sum is %d", sum);
     return 0;
}


