// Your code here...
#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    if(day == 1 || day == 3 || day == 5 || day == 7 || day == 8 || day == 10 || day == 12){
        printf("31");
    }
    else if(day==2){
        printf("28");
    }
    else if(day == 4 || day == 6 || day == 9 || day == 11){
        printf("30");
    }
}