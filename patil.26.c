#include<stdio.h>
int main() {
    char name[50];
    int a,b,mul;
   
 printf("Enter your name: "); scanf("%s", name);
  
  printf("Enter two numbers: "); scanf("%d%d", &a,&b);
    mul = a * b;
   
 printf("Hello %s, product is %d
", name, mul);
    return 0;
}
