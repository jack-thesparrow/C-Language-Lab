#include <stdio.h>
int main(){
	printf("Printing A-Z and a-z using loops\n");
	int newline_printed = 0;
	for (char ltr='A'; ltr<='z';ltr++){
		if (ltr>'Z' && ltr<'a'){
			if (!newline_printed){
				printf("\n");
				newline_printed=1;
			}
			continue;
		}
		printf("%c ", ltr);
	}




	return 0;
}
