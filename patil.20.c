#include<stdio.h>
int main() {
    char name[50], pet[50];
   
 printf("Enter your name: ");
    scanf("%s", name);
  
  printf("Do you have a pet? What is its name? ");
    scanf("%s", pet);
    
printf("Hello %s, your pet's name is %s.
", name, pet);
    return 0;
}
