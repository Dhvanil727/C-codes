#include <stdio.h>
#define size 10
int main()
{   
    int i, arr[size];
     printf("enter the numbers:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
       
    }
    printf("values of array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n", arr[i]*arr[i]);
    }
     return 0;
}


