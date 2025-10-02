#include<stdio.h>
int main() {
    char name[50];
    int a,b;
  
  printf("Enter your name: "); scanf("%s", name);
 
   printf("Enter two numbers: "); scanf("%d%d", &a,&b);
    int sum = a + b;
   
 printf("Hello %s, sum is %d
", name, sum);
    return 0;
}
