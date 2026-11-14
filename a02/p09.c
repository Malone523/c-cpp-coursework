#include <stdio.h>

int main () {
    char a;
    printf("a = ");
    scanf("%c",&a);

    int b;
    b = (int) a;

    // checking character class
    if(b>=48 && b<=57) printf("%c is a digit",a);
    else if ((b>=65 && b<=90) || (b>=97 && b<=122)) printf("%c is a letter",a);
    else printf ("%c is some other symbol",a);
    return 0;
}