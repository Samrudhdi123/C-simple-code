#include<stdio.h>
int main() 
{
    char name[50], favoriteRobot[50];
    
printf("Enter your name: ");
    scanf("%s", name);
    
printf("What is your favorite robot? ");
    scanf("%s", favoriteRobot);
   
 printf("Hello %s, your favorite robot is %s.
", name, favoriteRobot);
    return 0;
}
