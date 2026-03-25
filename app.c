#include <stdio.h>

// Addition function
int add(int a, int b) {
    return a + b;
}

int main() {
    char name[50];
    int num1, num2;

    printf("Welcome to DevOps C App\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("\n=== CALCULATOR MODE ENABLED ===\n"); // This overlaps with the Menu lines

    return 0;

}
