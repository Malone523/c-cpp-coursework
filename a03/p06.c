#include <stdio.h>

float to_pounds(int kg, int g){
    float pounds;
    pounds = (kg+ (float) g/1000)*2.2;
    return pounds;
    /*converting to pounds and 
    returning the variable*/
}

int main () {
    int kg,g;
    printf("Kilograms = ");
    scanf("%d",&kg);
    printf("Grams = ");
    scanf("%d",&g);
    printf("Pounds = %f",to_pounds(kg,g));
    /*printing the pounds on screen*/
    return 0;
}