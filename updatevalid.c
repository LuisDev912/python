#include <stdio.h>

int main() {
    int a1, a2, a3;

    // Taking input from user
    printf("Enter first angle: ");
    scanf("%d", &a1);

    printf("Enter second angle: ");
    scanf("%d", &a2);

    printf("Enter third angle: ");
    scanf("%d", &a3);

    // A triangle is valid if:
    // 1. All angles are greater than 0
    // 2. Sum of angles is exactly 180
    if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3 == 180)) {
        printf("Valid angles - They form a triangle.\n");
    } else {
        printf("Invalid angles - They do not form a triangle.\n");
    }

    return 0;
}
