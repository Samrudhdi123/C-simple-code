#include <stdio.h>

int main() {
    char name[50]; 
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age (in years): ");
    scanf("%d", &age); 

    printf("\nHello, %s! At %d, you're ready for robotics.\n", name, age);
    
    return 0;
}
