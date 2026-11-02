#include <stdio.h>

int main () {
    int n;
    printf("n = ");
    scanf("%d",&n);

    // checking if input is valid
    if (n<=0){
        printf("enter days again = ");
        scanf("%d",&n);
    };

    // converting and printing days and hours
    int i=1;
    while(i<=n){
        if (i==1)printf("%d day = %d hours\n",i,i*24);
        else printf("%d days = %d hours\n",i,i*24);
        i++;
    };
    return 0;
}