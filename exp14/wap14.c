#include <stdio.h>

int main()	{
	char letter;
	int newline_printed = 0;
	for (letter = 'A'; letter <= 'z';letter ++) {
		if (letter > 'Z' && letter < 'a'){
			if (!newline_printed){
				printf("\n");
				newline_printed = 1;
			}
			continue;
		}
		printf("%c",letter);
	}
	printf("\n");



	return 0;
}

