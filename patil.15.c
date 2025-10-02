#include<stdio.h>
int main() {
    char name[50], favoriteColor[30];
    
printf("Enter your name: ");
    scanf("%s", name);
    
printf("What is your favorite color? ");
    scanf("%s", favoriteColor);

    printf("Hello %s, your favorite color is %s.
", name, favoriteColor);
    return 0;
}
