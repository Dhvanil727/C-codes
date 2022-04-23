#include <stdio.h>
#define size 10
int main()
{
    int i, arr[size],min;
    float sum, avg;
    sum=0;
    min=9;
    printf("enter the numbers:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
       
    }
    printf("values of array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n", arr[i]);
         sum=sum+arr[i];
    
    if(arr[i]<min)
    {
        min=arr[i];
    }
    }
    printf("the minimum value is %d\n", min);
    avg=sum/size;
    printf("the sum of elements of array is %d\n", &sum);
    printf("the average of elements of array is %f", &avg);
     return 0;
}


