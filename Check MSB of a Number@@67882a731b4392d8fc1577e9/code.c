
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int msb = 1 << (sizeof(int) * 8 - 1); // Get MSB mask based on integer size

    if (n & msb) { // Check if MSB is set
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
