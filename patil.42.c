#include<stdio.h>
int main() {
    char name[50];
    float a,b;
    
printf("Enter your name: "); scanf("%s", name);
  
  printf("Enter two numbers: "); scanf("%f%f", &a,&b);
   
 printf("Hello %s, sum=%.2f ", name, a+b);
    if(b != 0) printf(", division=%.2f
", a/b);
    else printf(", division by zero not allowed.
");
    return 0;
}
