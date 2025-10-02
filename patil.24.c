#include<stdio.h>
int main() {
    char name[50];
    int a,b,diff;
    
printf("Enter your name: "); scanf("%s", name);
  
  printf("Enter two numbers: "); scanf("%d%d", &a,&b);
    diff = a - b;
    
printf("Hello %s, difference is %d
", name, diff);
    return 0;
}
