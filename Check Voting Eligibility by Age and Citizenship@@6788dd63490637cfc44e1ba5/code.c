// Your code here...
#include<stdio.h>
int main(){
    int age,citizen;
    scanf("%d%d",&age,&citizen);
    if(age>=18 && citizen==1){
        printf("Eligible");
    }
    else if(age<18 && citizen==1){
        printf(" Not Eligible");
    }
    else{
        printf("Not Eligible");
    }
}