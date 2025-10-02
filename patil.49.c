#include<stdio.h>
int main() {
    char name[50];
    int a,b,result;
    
printf("Enter your name: ");
    scanf("%s", name);
    
printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    result = (a * 2) + (b * 3);
  
  printf("Hello %s, weighted sum = %d
", name, result);
    return 0;
}
