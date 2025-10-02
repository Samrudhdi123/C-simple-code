#include<stdio.h>
int main() {
    char name[50], faculty[50];
  
  printf("Enter your name: ");
    scanf("%s", name);
  
  printf("Name of C programming faculty: ");
    scanf("%s", faculty);
    
printf("Hello %s, your teacher is %s.
", name, faculty);
    return 0;
}
