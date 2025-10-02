#include<stdio.h>
int main() {
    char name[50];
    int a,b,mod;
  
  printf("Enter your name: "); scanf("%s", name);

    printf("Enter two integers: "); scanf("%d%d", &a,&b);
    if(b != 0) {
        mod = a % b;
       
 printf("Hello %s, modulus = %d
", name, mod);
    } else {
      
  printf("Modulus by zero not allowed.
");
    }
    return 0;
}
