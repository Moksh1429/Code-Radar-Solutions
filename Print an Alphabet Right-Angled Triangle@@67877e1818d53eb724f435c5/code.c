#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 65; i <= n; i++) {
        for (char j = 65; j <= i; j++) {
            printf("%c ", j);
        }
        printf("\n"); // Print a new line after each row
    }
    return 0; 
}

