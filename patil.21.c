#include<stdio.h>
int main() {
    char name[50], favoriteBook[50];
  
  printf("Enter your name: ");
    scanf("%s", name);
   
 printf("Name your favorite book: ");
    scanf("%s", favoriteBook);

    printf("Hello %s, your favorite book is %s.
", name, favoriteBook);
    return 0;
}
