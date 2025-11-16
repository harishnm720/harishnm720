#include <stdio.h>

int main() {
    int time;
    char sub_char;

    printf("Enter a number (1 or 2) and a character:\n");

    if (scanf("%d %c", &time, &sub_char) != 2) {
        printf("Error reading input. Please ensure you enter a number and a character.\n");
        return 1;
    }

    switch (time) {
        case 1:
            printf("Thursday\n");
            printf("8:15 - 9:15\n");
            printf("Math\n");
            break;

        case 2:
            printf("Thursday\n");
            printf("8:15 - 9:15\n");
            printf("C.C.P\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}





