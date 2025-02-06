#include <stdio.h>



int main() {
    int n;
    scanf("%u",n);
    printf("Hexadecimal: %X\n",n);
    int octal=n+2;
    printf("Octal: %d",octal);
    return 0;
}