// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b){
        printf("Equal");
    }
    else if(a>b){
        printf("First");
    }
    else{
        printf("Second");
    }
}