#include <stdio.h>

int main () {
    int weeks, days, hours;
    
    printf("Number of weeks = ");
    scanf ("%d",&weeks);

    printf("Number of days = ");
    scanf ("%d",&days);

    printf("Number of hours = ");
    scanf ("%d",&hours);

    int total = (weeks*7*24) + (days*24) + hours;   // total number of hours
    printf("Total hours = %d",total);
    return 0;
}