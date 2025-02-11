// Your code here...
#include<stdio.h>
int main(){
    int count=0;
    int n;
    if(n<2){
        print("Not Prime");
    }
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(=n%i==0){
            count=count+1;

        }
    }
    if(count==2){
        print("Prime");
    }
    else{
        printf("Not prime");
    }
}