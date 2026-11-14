#include <stdio.h>

double sum25(double v[], int n){
    double sum;
    if (n<=5) return -111;
    sum = v[2]+v[5]; 
    return sum;
    /*checking is v[5] exists*/
} 

int main () {
    int n = 0,i=0;
    double v[20];
    while (n <= 0 || n >20){
        printf("Enter n = ");
        scanf("%d",&n);
    }
    while (i<n){
        printf("Enter no. %d = ",i+1);
        scanf("%lf",&v[i]);
        i++;
        /*entering numbers into array*/
    }
    if (sum25(v,n)==-111) {
        printf("v[5] is not initiated");
    }
    else printf("Sum = %lf",sum25(v,n));
    return 0;
}
