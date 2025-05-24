#include <stdio.h>

int main() {
    printf("Weekdays Table: \n");
    
    int day;
    printf("Enter the date: ");
    scanf("%d", &day);

    // Calculate the result based on the day of the week
    int result = day % 7;

    switch (result) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Enter a valid date\n");
            break;
    }

    return 0;
	return 0;
}
