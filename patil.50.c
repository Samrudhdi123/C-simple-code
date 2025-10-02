#include<stdio.h>
int main() {
    char name[50];
    int a,b,result;
   
 printf("Enter your name: ");
    scanf("%s", name);
    
printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    result = (a + b) - (a * b);

    printf("Hello %s, (sum - product) = %d
", name, result);
    return 0;
}
