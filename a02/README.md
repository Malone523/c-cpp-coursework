# Assignment 2 - Reading from the Keyboard, Using Pointers, Conditions and Loops

**Problem 2.1**  Reading input

Write a program that:

1. reads 2 doubles from the keyboard
2. prints the sum of the 2 doubles
3. prints the difference of the 2 doubles
4. prints the square of the first double
5. reads 2 integers from the keyboard
6. computes the sum and product of the 2 integers
7. prints the sum and the product of the 2 integers
8. reads 2 chars from the keyboard
9. computes the sum and product of the 2 chars
10. prints the sum and product of the 2 chars as both decimal and chars

**Input:** 
 ```c
1.2
3.6
2
5
(
)
```

**Desired Output:**
 ```c
sum of doubles=4.800000
difference of doubles=-2.400000
square=1.440000
sum of integers=7
product of integers=10
sum of chars=81
product of chars=1640
sum of chars=Q
product of chars=h
```


---
**Problem 2.2** Decimal, octal and hexadecimal numbers

Write a program that:

1. reads a char from the keyboard
2. prints the char as character, decimal, octal and hexadecimal

**Input:** 
 ```c
{
```

**Desired Output:**
 ```c
character={
decimal=123
octal=173
hexadecimal=7b
```


---
**Problem 2.3** Time calculation

Write a program that:

1. reads integers from the keyboard for weeks, days and hours
2. computes the total number of hours
3. prints it on the screen


---
**Problem 2.4** Area computations

Write a program that:

1. reads from the keyboard three float variables ***a***, ***b***, ***h***
2. compute the areas of: square with side ***a***, rectangle with length ***a*** and width ***b***, a triangle with base ***a*** and heigh ***h***, and a trapezoid with basses ***a***, ***b*** and the heigh ***h***
   
**Input:** 
 ```c
10
14.5
5
```

**Desired Output:**
 ```c
square area=100.000000
rectangle area=145.000000
triangle area=25.000000
trapezoid area=61.250000
```

---
**Problem 2.5** Pointers

Write a program that:

1. reads an integer ***a*** from the keyboard
2. prints the value
3. initialize a pointer ***ptr_a*** pointing to ***a***
4. print the address contained in the pointer
5. increase ***a*** by 5 by using the pointer
6. print the modified value and the address


---
**Problem 2.6** Multiple pointers to same data

Write a program that:

1. reads two double variables ***x*** and ***y*** from the keyboard
2. initialize 3 pointers ***ptr_one***, ***ptr_two*** and ***ptr_three***
3. the first 2 pointers should point to ***x*** and the third to ***y***
4. using ***printf*** show that ***ptr_one*** and ***ptr_two*** point to the same address and ***ptr_three*** contains a different address
   

---
**Problem 2.7** Infinite loop

Fix the code:
 ```c
#include <stdio.h>

int main()
{
  int i = 8;
  while (i >= 4)
  printf("i is %d\n", i);
  i--;
  printf("That’s it.\n");
  return 0;
}
```


---
**Problem 2.8** Divisibility

Write a program that:

1. reads an integer from the keyboard
2. determines whether it is divisible by both 2 and 7
3. if true it prints "The number is divisible by 2 and 7"
4. if false it prints "The number is NOT divisible by 2 and 7"
   
**Input:** 
 ```c
56
```

**Desired Output:**
 ```c
The number is divisible by 2 and 7
```


---
**Problem 2.9** Character classification

Write a program that:

1. reads a character from the keyboard
2. determines whether it is a digit, letter or some other symbol
3. prints a corresponding message on the screen
   
**Input:** 
```c
!
```

**Desired Output:**
```c
! is some other symbol
```


---
**Problem 2.10** Days and hours

Write a program that:

1. reads an integer ***n*** from the keyboard
2. prints a conversion table for 1 to ***n*** days
3. make sure ***n*** is valid
   
**Input:** 
 ```c
3
```

**Desired Output:**
 ```c
1 day = 24 hours
2 days = 48 hours
3 days = 72 hours
```
