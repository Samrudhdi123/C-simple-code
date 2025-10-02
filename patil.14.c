#include<stdio.h>
int main() {
    char name[50];
    int grade;
   
 printf("Enter your name: ");
    scanf("%s", name);

    printf("What is your current grade? ");
    scanf("%d", &grade);
    printf("Hello %s, your grade is %d.
", name, grade);
    return 0;
}
