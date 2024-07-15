#include<stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = a + b;

    printf("The value of a is %d,    \nvalue of b is %d,      \nvalue of sum is %d\n", a, b, c);
    // Modules operator is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n", a%b);

    // ^ does not work for exponentiation in C language
    // int d = a^b;

    return 0;
}