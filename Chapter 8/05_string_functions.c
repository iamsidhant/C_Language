#include<stdio.h>
#include<string.h>

int main()
{
    char st[] = "Sidhant";
    char s1[56] = "Sidhant";
    char s2[56] = " Arya";

    // printf("%d", strlen(st));

    char target[30];
    strcpy(target, st);     // target now contains "Sidhant"
    // printf("%s %s", st, target);

    strcat(s1, s2);     // s1 now contains "SidhantArya" <no space in between>
    // printf("%s", s1);

    int a = strcmp("deep", "joke");     // strcmp Depends on ASCII value
    printf("%d", a);

    return 0;
}