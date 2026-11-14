#include <stdio.h>
float convert(int cm);

int main () {
    int cm;
    printf("Enter cm = ");
    scanf("%d",&cm);
    printf("Converted into km = %f",convert(cm));
    // printing the result directly
    return 0;
}

float convert(int cm){
    float km;
    km = (float)cm/100000;
    return km;
    // transforming the cm into km
}