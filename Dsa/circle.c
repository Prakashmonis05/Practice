#include <stdio.h>

int main()
{
    float radius, area, perimeter;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Area of circle = %.2f\n", area);
    printf("Perimeter of circle = %.2f\n", perimeter);

    return 0;
}