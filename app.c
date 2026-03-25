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

    // Calculator Logic
    printf("\n--- Calculator ---\n");
    printf("Enter two numbers to add: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", add(num1, num2));

    return 0;
}
