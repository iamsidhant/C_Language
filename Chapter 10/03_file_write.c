#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sidhant.txt", "a");       // w for write and a for append

    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}
