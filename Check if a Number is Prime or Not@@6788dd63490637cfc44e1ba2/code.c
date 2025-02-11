// Your code here...
#include <stdio.h>
#include <math.h> // For sqrt function

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    if (n < 2) { // 0 and 1 are not prime
        printf("Not prime\n");
        return 0;
    }

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; // Count divisor i
            if (i != n / i) count++; // Count divisor (n / i) if it's different
        }
    }

    if (count == 2)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
