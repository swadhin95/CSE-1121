#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, area;
    printf("Enter the lengths of three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if it's a valid triangle
    if (a + b > c && a + c > b && b + c > a)
    {
        // Calculate the semi-perimeter (s)
        double s = (a + b + c) / 2.0;

        // Calculate the area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area of the triangle is: %.2f\n", area);
    }
    else
        printf("No triangle possible\n");

    return 0;
}

