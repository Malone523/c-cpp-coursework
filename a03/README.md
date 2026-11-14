# Assignment 3 - Loops, Arrays, Functions and Strings

**Problem 3.1**  Printing numbers

Write a program that:

1. reads a float ***x***
2. reads an integer ***n***
3. prints the float ***x*** ***n*** times on the screen
4. make sure n is a valid integer value
5. if ***n*** is invalid repeat entering n
   
**Input:** 
 ```c
1.25
-8
0
4
```

**Desired Output:**
 ```c
Input is invalid, reenter value
Input is invalid, reenter value
1.250000
1.250000
1.250000
1.250000
```


---
**Problem 3.2** Printing characters

Write a program that:

1. reads a lowercase character ***ch***
2. reads an integer ***n***
3. prints the characters ***ch***, ***ch*** - 1, ... , ***ch*** - ***n***
---


**Problem 3.3** Centimeters to kilometers

Write a program that:

1. reads an integer length from the keyboard
2. converts it from cm to km
3. defines and uses the function ***float convert(int cm)*** to do the conversion

**Input:** 
 ```c
12
```

**Desired Output:**
 ```c
Result of conversion: 0.000120
```
---


**Problem 3.4** Wrong position

Fix the code:  

 ```c
#include <stdio.h>

int position(char str[], char c)
{
  int idx;
  /
  ∗ Loop until end of string ∗/
  for (idx = 0; str[idx] != c && str[idx] != ’\0’; ++idx)
  /
  ∗ do nothing ∗/
  return 0;
}

int main() {
  char line[80];
  while (1) {
  printf("Enter string:\n");
  fgets(line, sizeof(line), stdin);
  printf("The first occurrence of ’g’ is: %d\n", position(line, ’g’));
  }
}
```
---


**Problem 3.5** Temperature average

Write a program that:

1. reads a character ***c***
2. reads an integer ***n*** and ***n*** double values representing temp in Celsius
3. uses an array to store the temps
4. if ***c*** is ***'s'*** computes the sum of the temps
5. if ***c*** is ***'p'*** prints the list of temps
6. if ***c*** is ***'t'*** prints the temps in Fahrenheit
7. if any other char is entered computes the average of the temos
8. uses a ***switch*** instruction
9. formula to convert Celsiu to Faherenheit is F = (9/5) * C + 32
---


**Problem 3.6** Kilogram and grams to pounds

Write a program that:

1. reads the weight in kg and g from the keyboard
2. converts them into pounds
3. defines and uses the function ***float to_pounds(int kg, int g);***
4. 1 kg = 2.2 pounds
---

**Input:** 
 ```c
5
100
```

**Desired Output:**
 ```c
Result of conversion: 11.220000
```
---


**Problem 3.7** Printing a form

Write a program that:

1. reads two integers ***n*** and ***m***
2. reads a character ***c***
3. defines and uses the function ***void print_form(int n, int m, char c);***
4. prints a trapezoid of height ***n***, bases ***m*** and ***m***+***n***-1 with the char ***c***

**Input:** 
 ```c
4
3
$
```

**Desired Output:**
 ```c
$$$
$$$$
$$$$$
$$$$$$
```
---


**Problem 3.8** Sum and average

Write a program that:

1. reads up to 10 floats
2. if the input is -99.0 stop reading
3. computes the sum and average of all values excluding -99.0
4. defines and uses 2 functions: one for sum and one for average
5. make sure to cover all possible cases
---


**Problem 3.9** Sum of two values in array

Write a program that:

1. reads an integer value ***n*** followed by ***n*** doubles
2. stores the doubles in an array of max size 20
3. defines and use the function ***double sum25(double v[], int n);***
4. the function above should compute and return the sum of elements in ***v*** at position 2 and 5
5. if those positions are invalid within ***v*** print an error msg and returns the value -111
6. prints the sum on screen

**Input:** 
 ```c
6
1.5
1.5
1.5
1.5
1.5
-1.5
```

**Desired Output:**
 ```c
sum=0.000000
```  
---


**Problem 3.10** Sum of two values in array

Write a program that:

1. reads two floats
2. defines the functions:
 ```c
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);
```
3. the ***modifybyref*** function should add 3 to the first float and 11 to the second
4. shows that the first two have the same effect
5. shows the effect of ***modifybyref***
---


**Problem 3.11** Working with strings

Write a program that:

1. reads two strings called ***one*** and ***two***
2. the strings should be able to contain spaces
3. prints the lengths of both strings
4. prints the concatenation of the two strings
5. declares a third string, copy string ***two*** into it and print it on screen
6. compares the two strings and print a corresponding msg
7. reads a character ***c***
8. searches for ***c*** in ***two***
9. prints the position of the first occurrence of ***c*** within ***two***
10. if the character is not contained in the string print a corresponding msg
11. uses the functions from ***string.h***

**Input:** 
 ```c
first string
hello world
l

```

**Desired Output:**
 ```c
length1=12
length2=11
concatenation=first stringhello world
copy=hello world
one is smaller than two
position=2
```  
