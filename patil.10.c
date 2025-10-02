#include<stdio.h>
int main() {
    char name[50], hobby[50];
  
  printf("Enter your name: ");
    scanf("%s", name);
    
printf("What is your hobby? ");
    scanf("%s", hobby);
   
 printf("Hello %s, you like %s.
", name, hobby);
    return 0;
}
