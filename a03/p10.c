#include <stdio.h>

float product (float a, float b){
    return a*b;
    /*returning the product*/
}

void productbyref(float a, float b, float *p){
    *p=a*b;
    /*returning the product by reference*/
}

void modifybyref(float *a, float *b){
    *a+=3;
    *b+=11;
    /*modifying variables by reference*/
}

int main () {
    float a,b,c;
    float *p1,*p2,*p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    /*initiazing pointers*/
    printf("Enter a = ");
    scanf("%f",&a);
    printf("Enter b = ");
    scanf("%f",&b);
    printf("Product = %f\n",product(a,b));
    productbyref(a,b,p3);
    printf("Product by reference = %f\n",c);
    modifybyref(p1,p2); 
    printf("Modified a = %f\n",a);
    printf("Modified b = %f\n",b);
    return 0;
}