#include <stdio.h>

void print_form (int n, int m ,char c){
    int i=1,j;
    while (i<=n){
        for (j=1;j<=m;j++){
            printf("%c",c); //prining the lines
        }
        printf("\n"); 
        m++; // incresing every line by one
        i++;
    }    
}

int main () {
    int m,n;
    char c;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Enter m = ");
    scanf("%d",&m);
    getchar();
    printf("Enter c = ");
    scanf("%c",&c);
    print_form(n,m,c);
    /*calling the function*/
    return 0;
}