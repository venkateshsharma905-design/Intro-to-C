#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int x, y, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    
    result = multiply(x, y);
    printf("Product of %d and %d is %d\n", x, y, result);
    
    return 0;
}