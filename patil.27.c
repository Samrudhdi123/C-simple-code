#include<stdio.h>
int main() {
    char name[50];
    float a,b,div;
   
 printf("Enter your name: "); scanf("%s", name);
    
printf("Enter two numbers: "); scanf("%f%f", &a,&b);
    if(b != 0) {
        div = a / b;
        
printf("Hello %s, division result is %.2f
", name, div);
    } else {
        printf("Division by zero is not allowed.
");
    }
    return 0;
}
