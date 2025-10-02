#include<stdio.h>
int main() {
    char name[50];
    float a,b,result;
   
 printf("Enter your name: ");
    scanf("%s", name);
   
 printf("Enter two numbers: ");
    scanf("%f%f", &a,&b);
    if(b != 0) {
        result = (a / b) + 10;
       
 printf("Hello %s, (division + 10) = %.2f
", name, result);
    } else {
      
  printf("Division by zero not allowed.
");
    }
    return 0;
}
