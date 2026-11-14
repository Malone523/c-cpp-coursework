#include <stdio.h>

int main () {
    int a,b=0;
    printf("a = ");
    scanf("%d",&a);
    
    // checking diviisility
    if (a%2==0)b++;
    if (a%7==0)b++;
    
    if (b==2) printf("The number is divisible by 2 and 7");
    else printf("The number is NOT divisible by 2 and 7");
    return 0;
}