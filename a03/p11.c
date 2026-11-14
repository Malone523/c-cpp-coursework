#include <stdio.h>
#include <string.h>

    int main() {
        char one[100], two[100], three[100], c;
        int length_1, length_2;

        printf("Enter first string: ");
        fgets(one, sizeof(one), stdin);
        one[strcspn(one, "\n")] = '\0'; // removing \n
        printf("Enter second string: ");
        fgets(two, sizeof(two), stdin); 
        two[strcspn(two, "\n")] = '\0'; //removing \n
        /*geting the strings and 
        removing unwanted characters*/

        length_1 = strlen(one);
        length_2 = strlen(two);
        printf("Length 1 = %d\n", length_1);
        printf("Length 2 = %d\n", length_2);
        /*geting the lengths of the
        strings and printing them*/

        printf("Concatenation = %s\n", strcat(one, two));

        strcpy(three, two);
        printf("Copy = %s\n", three); 
        
        if (strcmp(one, two) == 0) {
            printf("Equal\n");
        } 
        else if (strcmp(one, two) < 0)  {
            printf("String 1 comes first\n");
        }
        else if (strcmp(one, two) > 0){
            printf("String 2 comes first\n");
        }
        /*comparing the strings*/

        printf("Enter c = ");
        scanf(" %c", &c); 
        char *pos = strchr(two, c);
        if (pos != NULL) {
            printf("Position = %d\n", pos - two);
        } else {
            printf("Character %c is not in string 2\n", c);
        }
        /*checking ic character c is in string 2*/

        return 0;
    }