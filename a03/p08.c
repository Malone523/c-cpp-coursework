#include <stdio.h>

float sum (float no[]) {
    int i=0;
    float sum=0;
     while (i<10){
        if (no[i]==-99) {
            break;
            /*stopping the sum 
            after reaching -99*/
        }
        sum += no[i];
        i++;
    }
    return sum;
}

float average (float no[]) {
    int i=0,j=0;;
    float avg=0;
     while (i<10){
        if (no[i]==-99) {
            break;
            /*stopping the avg 
            after reaching -99*/
        }
        avg += no[i];
        j++;
        i++;
    }
    avg/=j;
    return avg;
}

int main () {
    int i=0;
    float no[10];
    while (i<10){
        printf("Enter no. %d (Or -99 to stop) = ",i+1);
        scanf("%f",&no[i]);
        if (no[i]==-99) {
            break;
            /*stopping the reading
            after reaching -99*/
        }
        i++;
    }
    if (i != 0){
        printf("Sum = %f\n", sum(no));
        printf("Average = %f", average(no));
        /*printing on screen sum and avg*/
    }

    return 0;
}
