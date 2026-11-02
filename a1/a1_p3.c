#include <stdio.h>

int main () { 
    float result; 
    int a = 5;
    float b = 13.5;
    // first error was because we asigned a decimal number to an integer variable
    result = a/b;
    printf("The result is %f\n",result);
    // second error was because printf was looking for an int instead of a float number 
    return 0;
}