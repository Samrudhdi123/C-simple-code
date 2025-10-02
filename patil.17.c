#include<stdio.h>
int main() {
    char name[50];
    float weight;
    
printf("Enter your name: ");
    scanf("%s", name);
    
printf("What is your weight in kg? ");
    scanf("%f", &weight);

    printf("Hello %s, your weight is %.2f kg.
", name, weight);
    return 0;
}
