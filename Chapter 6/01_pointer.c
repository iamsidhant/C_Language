// #include<stdio.h>

// int main(){
//     int i = 72;
//     int* j = &i;    // j is a pointer pointing towards i (j is pointing integer)
//     int k = 67;

//     printf("The address of i is %p\n", &i);
//     printf("The address of i is %p\n", j);
//     printf("The address of i is %p\n", &k);

//     printf("The value at address j is %d\n", *(&i));

//     return 0;
// }


#include<stdio.h>

int main(){
    int i = 8;
    int* j;
    j = &i;

    printf("add i = %u\n", &i);
    printf("add i = %u\n", j);
    printf("add j = %u\n", &j);
    printf("The value of i = %u\n", i);
    printf("The value of i = %u\n", *(&i));
    printf("The value of i = %u\n", *j);

    return 0;
}