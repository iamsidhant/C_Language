#include<stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4    (Evaluation order from right to left)
    // 4 5 5

    return 0;
}