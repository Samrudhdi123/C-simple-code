#include<stdio.h>
int main() {
    char name[50];
    int favoriteNumber;
   
 printf("Enter your name: ");
    scanf("%s", name);
  
  printf("What is your favorite number? ");
    scanf("%d", &favoriteNumber);
 
   printf("Hello %s, your favorite number is %d.
", name, favoriteNumber);
    return 0;
}
