#include<stdio.h>

int main(){
    int a = 4, b = 8, c = 116, d = 32;

    if(a>b && a>c && a>d){
        printf("The greatest number of all is %d", a);
    }
    if(b>a && b>c && b>d){
        printf("The greatest number of all is %d", b);
    }
    if(c>b && c>a && c>d){
        printf("The greatest number of all is %d", c);
    }
    if(d>b && d>c && d>a){
        printf("The greatest number of all is %d", d);
    }
    
    return 0;
}