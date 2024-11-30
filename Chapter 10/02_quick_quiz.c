#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sidhant2.txt", "r");

    if (ptr == NULL){
        printf("This file does not exist \n");

    }
    else{
        
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
        
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fclose(ptr);
    }
    
    return 0;
}
