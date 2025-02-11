// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char ch[]={'+','-','/','*'};\
    if(ch=='+'){
        int sum=a+b;
        printf("%d",sum);
    }
    else if(ch=='-'){
        int sub=a-b;
        printf("%d",sub);
    }
    else if(ch=='*'){
        int into=a*b;
        printf("%d",into);
    }
    else if(ch=='/'){
        int divide=a/b;
        printf("%d",divide);
    }
}
