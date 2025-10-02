#include<stdio.h>
int main() {
    char name[50], college[50];
  
  printf("Enter your name: ");
    scanf("%s", name);
  
  printf("What is your college name? ");
    scanf("%s", college);
 
   printf("Hello %s, you study at %s.
", name, college);
    return 0;
}
