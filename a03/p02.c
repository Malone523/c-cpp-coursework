#include <stdio.h>

int main () {
    char ch;
    int n;
    printf("Enter character = ");
    scanf("%c",&ch);
    printf("Enter number = ");
    scanf("%d",&n);
    /*geting the character*/
    int i=0;
    while (i<=n){
        printf("%c ",ch-i);
        i++;
    }
    return 0;
}