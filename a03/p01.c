#include <stdio.h>

int main () {
    float x;
    int n,i=0;
    printf ("Enter x = ");
    scanf("%f",&x);
    printf ("Enter n = ");
    scanf("%d",&n);
    while (n<=0){ 
        printf("Input is invalid, reenter value\n");
        printf ("Enter n = ");
        scanf("%d",&n);
    }
    while (i<n){
        printf("%f\n",x);
        i++;
    }
    return 0;
}