#include <stdio.h>

int main()	{
	
	int day;
	int result;
	printf("Exp13: Read a number (integer) from the user and print the day of the week based on the user input.\n\n");
	
	printf("Enter the day : ");
	scanf("%d",&day);

	result = day % 7;

	if (result == 0){
		printf("Sunday");
	}
	else {
		if (result == 1) {
			printf("Monday");
		}
		if (result == 2) {
			printf("Tuesday");
		}
		if (result == 3) {
			printf("Wednesday");
		}
		if (result ==4) {
			printf("Thursday");
		}
		if (result == 5) {
			printf("Friday");
		}
		if (result == 6) {
			printf("Saturday");
		}
	}



	return 0;
}
