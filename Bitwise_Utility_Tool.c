#include <stdio.h>

int main() {
    int choice;
    int a, b;
    int result;

    printf("Bitwise Utility Tool\n");
    printf("1. AND (&)\n");
    printf("2. OR (|)\n");
    printf("3. XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    switch (choice) {
        case 1:
            result = a & b;
            printf("Result of AND = %d\n", result);
            break;

        case 2:
            result = a | b;
            printf("Result of OR = %d\n", result);
            break;

        case 3:
            result = a ^ b;
            printf("Result of XOR = %d\n", result);
            break;

        case 4:
            result = a << b;
            printf("Result of Left Shift = %d\n", result);
            break;

        case 5:
            result = a >> b;
            printf("Result of Right Shift = %d\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
