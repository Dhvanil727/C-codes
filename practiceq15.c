#include<stdio.h>
#include<conio.h>
void main()

{
    
    int i,j,rows,cols,a[rows][cols];
    printf("enter no. of rows:\n");
    scanf("%d\n", &rows);
    printf("enter no. of cols:\n");
    scanf("%d\n", &cols);
    printf("enter  the values:\n");
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=cols;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
     for(i=0;i<=rows;i++)
    {
        for(j=0;j<=cols;j++)
        {
            printf("%d", a[i][j]);
        }
    }
    getch();
}