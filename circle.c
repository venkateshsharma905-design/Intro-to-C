#include <stdio.h>
#define PI 3.1415926

float myfunc(float r)
{
    float a;
    a = PI * r * r;
    return (a);
}

int main()
{
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = myfunc(radius);
    printf("\nArea is %f\n", area);
    
    return 0;
}