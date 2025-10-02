#include<stdio.h>
int main()
 {
    char name[50];
    int year;
   
 printf("Enter your name: ");
    scanf("%s", name);
  
  printf("What year is it now? ");
    scanf("%d", &year);
   
 printf("Hello %s, the current year is %d.
", name, year);
    return 0;
}
