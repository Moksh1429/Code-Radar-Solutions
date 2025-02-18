// Your code here...
#include <stdio.h>
#include <math.h> 

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    if (n < 2) { 
        printf("Not prime\n");
        return 0;
    }

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; 
            if (i != n / i) count++; 
        }
    }

    if (count == 2){
        printf("%d",i);
    }
        
    

    return 0;
}
