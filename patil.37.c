#include<stdio.h>
int main() {
    char name[50];
    int a,b,diffSq;
    
printf("Enter your name: "); scanf("%s", name);
   
 printf("Enter two numbers: "); scanf("%d%d", &a,&b);
    diffSq = (a * a) - (b * b);
    
printf("Hello %s, difference of squares = %d
", name, diffSq);
    return 0;
}
