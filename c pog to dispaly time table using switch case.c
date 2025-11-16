#include <stdio.h>

int main() {
    int choice;

    printf("Select a day:\n");
    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n");
    printf("5. Friday\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Monday Timetable:\n");
            printf("7:15 - 8:15: Math\n");
            printf("10:00 - 11:00: C pog\n");
            break;
        case 2:
            printf("Tuesday Timetable:\n");
            printf("7:15 - 8:15: C pog\n");
            printf("10:00 - 11:00: Physics\n");
            break;
        case 3:
            printf("Wednesday Timetable:\n");
            printf("7:15 - 8:15: Physics\n");
            printf("10:00 - 11:00: C Organization\n");
            break;
        case 4:
            printf("Thursday Timetable:\n");
            printf("7:15 - 8:15: Math\n");
            printf("8:15 - 9:15: C.pog\n");
            break;
        case 5:
            printf("Friday Timetable:\n");
            printf("9:00 - 10:00:C Organization\n");
            printf("10:00 - 11:00: Math\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;

            }
