#include<stdio.h>

int main(){
    
    if(1){
        printf("This if is executed\n");
    };
    if(23456){
        printf("This if is also executed\n");
    };

    if(2.75){
        printf("This if is also executed\n");
    };

    if('c'){
        printf("Character inside this if is also executed\n");
    };

    if(0){
        printf("I am zero. I am not executed\n");
    };

    return 0;
}