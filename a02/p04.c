#include <stdio.h>

int main () {
    float a,b,h;

    printf("a = ");
    scanf("%f",&a);
    
    printf("b = ");
    scanf("%f",&b);
    
    printf("h = ");
    scanf("%f",&h);
    
    //printing all the areas
    printf("Square area = %f\n",a*a);
    printf("Rectangle area = %f\n",a*b);
    printf("Triangle area = %f\n", a*h/2);
    printf("Trapezoid area = %f\n",(a+b)*h/2);
    return 0;
}