#include<stdio.h>


int main(){
    FILE *fptr;
    int num = 9;
    fptr = fopen("table.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d", num*(i+1));
        fprintf(fptr, "%c", '\n');
    }
    
    fclose(fptr);
    
    return 0;
}
