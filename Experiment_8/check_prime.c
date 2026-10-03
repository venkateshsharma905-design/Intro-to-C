#include <stdio.h>  

int isPrime(int n) {     if (n < 2)         return 0;  

    for (int i = 2; i <= n / 2; i++) {         if (n % i == 0)             return 0;     }     return 1; }  

int main() {     printf("Prime numbers between 1 and 50:\n");  

    for (int num = 1; num <= 50; num++) {         if (isPrime(num) == 1) {             printf("%d ", num);         }     }     printf("\n");  

    return 0; } 