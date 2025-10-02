#include<stdio.h>
int main() {
    char name[50];
    float a,b,result;
   
 printf("Enter your name: ");
    scanf("%s", name);
 
   printf("Enter two numbers: ");
    scanf("%f%f", &a,&b);
    result = (a - b) / 2;
    
printf("Hello %s, (difference / 2) = %.2f
", name, result);
    return 0;
}
