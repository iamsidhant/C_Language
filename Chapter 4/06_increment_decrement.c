#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5;      // 10
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++);    // 10
    printf("The value of i is %d\n", i);      // 11

    i += 2;     // Same as i = i + 2
    printf("The value of i is %d\n", i);      // 13

    // i++ first prints i then increment its value (Post increment Operator)
    // ++i increments i first then print i (Pre increment Operator)

    return 0;
}