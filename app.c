#include <stdio.h>
int main() {
    char name[50];
    printf("Welcome to DevOps C App\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    
    // PART 5 CONFLICT AREA
    printf("\n--- Main Menu ---\n");
    printf("1. Use Calculator\n");
    printf("2. Exit\n");

    return 0;
}
