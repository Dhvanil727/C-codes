#include <stdio.h>
int main()
{
    int a, b, c;
    printf("value of a is:\n");
    scanf("%d", &a);
    printf("value of b is:\n");
    scanf("%d", &b);
    c = b;
    b = a;
    a = c;
    printf("values after swaping:\n");
    printf("a=%d and b=%d", a, b);
    return 0;
}
