#include<stdio.h>

typedef struct emp{
    int salary;
    float score;
} Employee;


int main(){
    Employee e1;
    Employee* ptr = &e1;

    (*ptr).salary = 56;
    (*ptr).score = 163;

    // ptr->salary = 56;
    // ptr->score = 163;

    printf("The Salary is %d and the score is %.2f\n", ptr->salary, ptr->score);

    return 0;
}
