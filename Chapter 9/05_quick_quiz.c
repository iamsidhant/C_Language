#include<stdio.h>
#include<string.h>

struct employee
{
    int code;       // This declares a new user defined data type!
    float salary;
    char name[10];
};      // semicolon is important


void show(struct employee e);       // function prototype

void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}


int main(){
    struct employee e1, e2;
    e1.code = 4511;
    strcpy(e1.name, "Sidhant");
    e1.salary = 560000;

    show(e1);
    
    return 0;
}
