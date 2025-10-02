#include<stdio.h>
int main()
 {
    char name[50];
    float height;
   
 printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your height in cm: ");
    scanf("%f", &height);

    printf("Hello %s, your height is %.2f cm.
", name, height);
    return 0;
}
