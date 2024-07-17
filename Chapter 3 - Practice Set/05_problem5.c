// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include<stdio.h>

int main(){
    char ch = 's';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97 to 122 are lowercase alphabetical ACSII values

    if(ch >= 97 && ch <= 122){
        printf("This character is of lowercase\n");
    }
    else{
        printf("This character is not of lowercase\n");
    }

    return 0;
}