// Your code here...
#include<stdio.h>
int main(){
    int count=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=n%i==0;
        count=count+1;
    }
    if(count==2){
        print("Prime");
    }
    else{
        printf("Not prime");
    }
}