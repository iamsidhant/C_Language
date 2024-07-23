#include<stdio.h>

int main(){
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += (i*8);
    }
    printf("Sum of the table of 8 is %d", sum);
    
    return 0;
}