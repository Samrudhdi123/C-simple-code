#include<stdio.h>
int main() 
{
    char name[50];
  
  printf("Enter your name: ");
    scanf("%s", name);
  
  printf("How many siblings do you have? ");
    int siblings;
    scanf("%d", &siblings);
  
  printf("Hello %s, you have %d siblings.
", name, siblings);
    return 0;
}
