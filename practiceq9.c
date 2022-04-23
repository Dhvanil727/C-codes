#include <stdio.h>
int main()
{
    int i,n,sum;
    printf("enter the numbers:\n");
    sum=0;
    for(i=1;;i++)
        {
            scanf("%d", &n);
            if(n==0)
            {
            break;
            }
            sum=sum+n;
        }
        printf("the sum of entered number is: %d", sum);
     return 0;
}


