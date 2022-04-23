#include <stdio.h>
int main()
{
    int n,rev,remainder,num,new;
    printf("enter a number:\n");
    scanf("%d", &n);
    num=n;
    rev=0;
    while(n>0)
    {
        remainder=n%10;
        rev=rev*10 + remainder;
        n/=10;
    }    
    printf("the reversed number is %d\n", rev);
    if(rev==num)
    {
        printf("entered number is a palindrome number");
    }
    else
    {
        printf("entered number is not a palindrome number");
    }
     return 0;
}


