#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c)
        printf("\nLargest is %d\n", a);
    else if (b > c)
        printf("\nLargest is %d\n", b);
    else
        printf("\nLargest is %d\n", c);
        
    return 0;
}