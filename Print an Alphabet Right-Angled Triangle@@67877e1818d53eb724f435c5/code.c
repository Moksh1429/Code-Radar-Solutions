// // Your code here...
// #include<stdio.h>
// int main(){
//     char n;
//     scanf("%c",&n);
//     for(char i='A';i<=n;i++){
//         for(char j='A';j<=i;j++){
//             printf("%c",j);
//         }
//     }
// }
#include <stdio.h>
int main() {
    char n;
    scanf("%c", &n);
    for (char i = 'A'; i <= n; i++) {
        for (char j = 'A'; j <= i; j++) {
            printf("%c ", j);
        }
        printf("\n"); // Print a new line after each row
    }
    return 0;
}

