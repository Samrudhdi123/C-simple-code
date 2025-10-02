#include<stdio.h>
int main() {
    char name[50];
    int a,b,result;
   
 printf("Enter your name: "); scanf("%s", name);
    
printf("Enter two numbers: "); scanf("%d%d", &a,&b);
    result = (a - b) * 2;
   
 printf("Hello %s, (difference * 2) = %d
", name, result);
    return 0;
}
