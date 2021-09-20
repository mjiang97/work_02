#include <stdio.h>  
int factorial (int);  

int main() {  
    int n,f;  
    printf("Input a number to calculate its factorial: ");  
    scanf("%d",&n);  
    f = factorial(n);  
    printf("factorial = %d",f);  
}  

int factorial(int n) {  
    if (n==0) {  
        return 0;  
    }  
    else if ( n == 1) {  
        return 1;  
    }  
    else {  
        return n*factorial(n-1);  
    }  
}  
