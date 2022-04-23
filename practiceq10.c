#include <stdio.h>
int main()
{
    char ch;
    printf("enter the bus code:\n");
    scanf("%c", &ch);
    if(ch=='D')
    {
        printf("the fair is Rs. 5");
    }
    else if(ch=='E')
    {
        printf("the fair is Rs. 13");
    }
    else if(ch=='F')
    {
        printf("the fair is Rs. 10");
    }
    else if(ch=='W')
    {
        printf("the fair is Rs. 14");
    }
    else
    {
        printf("invalid code");
    }
     return 0;
}


