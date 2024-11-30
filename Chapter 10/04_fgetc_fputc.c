#include<stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("sidhant.txt", "r");       // r for read, w for write and a for append
    // char c = fgetc(ptr);                // use to read a character from file 
    // printf("%c", c);

    // ptr = fopen("sidhant.txt", "a");
    // fputc('c', ptr);

    fclose(ptr);

    return 0;
}
