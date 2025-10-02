#include<stdio.h>
int main() {
    char name[50], dreamJob[50];
  
  printf("Enter your name: ");
    scanf("%s", name);
    
printf("What is your dream job? ");
    scanf("%s", dreamJob);
   
 printf("Hello %s, your dream job is %s.
", name, dreamJob);
    return 0;
}
