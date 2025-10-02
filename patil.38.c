#include<stdio.h>
int main() {
    char name[50];
    float a,b,avg;
 
   printf("Enter your name: "); scanf("%s", name);
   
 printf("Enter two numbers: "); scanf("%f%f", &a,&b);
    avg = (a + b) / 2;
    
printf("Hello %s, average = %.2f
", name, avg);
    return 0;
}
