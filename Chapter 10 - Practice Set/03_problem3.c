#include<stdio.h>

int main(){
    char ch;
    FILE *ptr2;
    FILE *ptr3;
    
    ptr2 = fopen("sidhant2.txt", "r");
    ptr3 = fopen("sidhant3.txt", "a");

    while (1)
    {
        ch = fgetc(ptr2);
        // When all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
        else{
            fprintf(ptr3, "%c", ch);
            fprintf(ptr3, "%c", ch);
            printf("%c", ch);
        }
        
    }
    
    fclose(ptr2);
    fclose(ptr3);
    
    return 0;
}
