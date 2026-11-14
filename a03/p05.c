#include <stdio.h>

int main () {
    char c;
    int n = 0;
    double sum=0,avg=0,fahr,temp[100];
    printf("Enter c = ");
    scanf("%c",&c);
    while (n <= 0 || n > 100){
        printf("Enter n = ");
        scanf("%d",&n);
    }
    int i=0; 
    while (i<n){
        printf("Enter no. %d = ",i+1);
        scanf("%lf",&temp[i]);
        i++;
    }
    i=0; // reseting i to not get another variable 
    switch (c)
    {
    case 's':
        while (i<n){
            sum += temp[i];
            i++;
            /*getting the sum*/
        }
        printf("Sum is = %lf ",sum);
        break;
    
    case 'p':
        printf("Teperatures : ");
        while (i<n){
            printf("%lf,",temp[i]);
            i++;
            /*listing the temperatures*/
        }
        break;

    case 't':
        printf("Teperatures in Fahrenheit: ");
        while (i<n){
            fahr = temp[i]*9/5+32;
            printf("%lf,",fahr);
            i++;
            /*converting into fahrenheit*/
        }
        break;

    default:
        while (i<n){
            avg += temp[i];
            i++;
        }
        avg /=n;
        /*we use the same formula as the sum
        but devide it by n to get avg*/
        printf("Average is = %lf",avg);
        break;
    }
    /*using switch to cover all variations of c*/
     
    return 0;
}