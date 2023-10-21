#include <stdio.h>
int main(){

    const double pi=3.14159;
    double radius;
    double circumference;
    double area;

    printf("\n ENTER THE RADIUS OF A CIRCLE: ");
    scanf("%lf",&radius);

    circumference = 2*pi*radius;
    area=pi*radius*radius;

    printf("\nCIRCUMFERENCE: %lf",circumference);
    printf("\nAREA: %lf",area);

    return 0;
}