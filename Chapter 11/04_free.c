#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d", &n);
    // int arr[n];      // Not allowed in C language
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 6;
    free(ptr);
    printf("%d", ptr[0]);
    
    return 0;
}