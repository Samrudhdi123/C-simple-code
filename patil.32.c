#include<stdio.h>
int main() {
    char name[50];
    int a,b,sum;
  
  printf("Enter your name: "); scanf("%s", name);

    printf("Enter two numbers: "); scanf("%d%d", &a,&b);
    sum = a + b + 10;
  
  printf("Hello %s, sum + 10 = %d
", name, sum);
    return 0;
}
