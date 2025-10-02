#include<stdio.h>
int main() {
    char name[50];
    int a,b,sumSq;
 
   printf("Enter your name: "); scanf("%s", name);
    
printf("Enter two numbers: "); scanf("%d%d", &a,&b);
    sumSq = (a * a) + (b * b);

    printf("Hello %s, sum of squares = %d
", name, sumSq);
    return 0;
}
