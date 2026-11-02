#include <stdio.h>

int main() {
    double result; 
    result = (double) (3 + 1) / 5; 
    // the result was 0.0 because it was using integers
    // the fix is to type cast it 
    printf ("The value of 4/5 is %lf\n", result);
    return 0;
}