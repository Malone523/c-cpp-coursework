#include <stdio.h>

int main () {
    int a;
    printf("Enter variable = ");
    scanf("%d",&a);
    printf("Initial a = %d\n",a);

    // initializing the pointer 
    int *ptr_a;
    ptr_a = &a;
    printf("Adress of initial a: %p\n",ptr_a);

    *ptr_a += 5;
    printf("Modified a = %d\n",a);
    printf("Adress of modified a: %p\n",ptr_a);
    return 0;
}