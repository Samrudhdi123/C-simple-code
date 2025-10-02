#include<stdio.h>
int main() {
    char name[50], favoriteSubject[50];
  
  printf("Enter your name: ");
    scanf("%s", name);
   
 printf("What is your favorite subject? ");
    scanf("%s", favoriteSubject);
   
 printf("Hello %s, your favorite subject is %s.
", name, favoriteSubject);
    return 0;
}
