#include<stdio.h>

int main(){
    // 9! = 9 X 8 X 7 X 6 X 5 X 4 X 3 X 2 X 1
    // 3! = 3 X 2 X 1
    // n! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X .... X n
    // 1! = 1
    // 0! = 1

    int product = 1;
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is %d", product);
     
    return 0;
}