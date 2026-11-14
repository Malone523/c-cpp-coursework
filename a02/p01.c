#include <stdio.h>

int main () {
    double a,b;     // the 2 doubles
    scanf("%lf %lf",&a,&b); 

    int c,d;    // the 2 integres
    scanf("%d %d",&c,&d);
    int sum_i = c+d, prod_i = c*d;

    char e,f;   // the 2 chars
    scanf(" %c\n %c",&e,&f);
    int sum_c = e+f, prod_c = e*f;
    
    //printing everything after all the input
    printf("sum of doubles = %lf\n",a+b);
    printf("difference of doubles = %lf\n",a-b);
    printf("square = %lf\n",a*a);
    printf("sum of integers = %d\n",sum_i);
    printf("product of integers = %d\n",prod_i);
    printf("sum of chars = %d\n",sum_c);
    printf("product of chars = %d\n",prod_c);
    printf("sum of chars = %c\n",sum_c);
    printf("product of chars = %c\n",prod_c);
    return 0;
}