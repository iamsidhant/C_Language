#include<stdio.h>

int main(){
    int age = 37;

    if (age > 60){
        printf("You are a senior citizen. You can drive.");
    }
    else if (age > 35){
        printf("You are a elder. You can drive.");
    }
    else if (age >= 18){
        printf("You can drive.");
    }
    else{
        printf("You cannot drive.");
    }
    
    return 0;
}