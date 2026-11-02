# Assignment 1

**Problem 1.1**  Compute division

Fix the code below:
```c
#include <stdio.h>

int main() {
  double result; 
  result = (3 + 1) / 5;
  printf("The value of 4/5 is %lf\n", result);
  return 0;
}
```

---
**Problem 1.2**  Wrong output

Fix the code below:
```c
#include <stdio.h>

int main() {
  int result;
  result = (2 + 7) ∗ 9 / 3;
  printf("The result is %d\n");
  return 0;
}
```

---
**Problem 1.3** Compile error

Fix the code below:
```c
include <stdio.h>

int main() {
  float result; 
  int a = 5;
  int b = 13.5;
  result = a / b;
  printf("The result is %d\n", result);
  return 0;
}
```

---
**Problem 1.4** Simple arithmetics

Write a program that:

1. assigns 17 to ***x*** and 4 to ***y***
2. prints ***x*** and ***y***
3. computes the sum of ***x*** and ***y*** and prints it
4. computes the product of ***x*** and ***y*** and prints it
5. computes the difference of ***x*** and ***y*** and prints it
6. computes the division of ***x*** and ***y*** and prints it
7. computes the remainder of the division of ***x*** and ***y*** and prints it

**Desired Output:**
```c
x=17
y=4
sum=21
product=68
difference=13
division=4.250000
remainder of division=1
```

---
**Problem 1.5** Using ***printf*** for multiple data types

Write a program that:

1. initializes an integer variable ***x*** with 2138 and prints it over 9 places
2. initializes a float variable ***y*** with -52.358925 and prints it over 11 places and with a floating point precision of 5
3. initializes a char variable ***z*** with 'G' and prints the character
4. initializes a double variable ***u*** with 61.295339687 and prints it with a floating point precision of 7

**Desired Output:**
```c
x= 2138
y= -52.35892
z=G
u=61.2953397
```

---
**Problem 1.6** Printing a char as a character and as a decimal value

Write a program that:
1. initializes a char variable ***c*** with with 'F'
2. prints the 3rd character after ***c*** as a character and a decimal

**Desired Output:**
```c
I 73
```
