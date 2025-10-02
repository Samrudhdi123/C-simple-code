#include<stdio.h>
int main() {
    char name[50], country[50];
    
printf("Enter your name: ");
    scanf("%s", name);
   
 printf("What country are you from? ");
    scanf("%s", country);
    
printf("Hello %s from %s.
", name, country);
    return 0;
}
