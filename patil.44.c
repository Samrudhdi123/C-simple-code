#include<stdio.h>
int main() {
    char name[50];
    int a,b;
    
printf("Enter your name: ");
    scanf("%s", name);
   
 printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    a--; b--;
  
  printf("Hello %s, product after decrement = %d
", name, a*b);
    return 0;
}
