#include<stdio.h>
int main() {
    char name[50];
    int a,b,result;
  
  printf("Enter your name: ");
    scanf("%s", name);
    
printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    result = (a * b) - 5;

    printf("Hello %s, (product - 5) = %d
", name, result);
    return 0;
}
