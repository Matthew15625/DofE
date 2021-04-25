#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLENGTH 20

int main() {

	char firstname[10];
	char surname[15];
	char year[4];

	scanf("%s", firstname);
	scanf("%s", surname);
	scanf("%s", year);

	char username[8];

	int i;

	for (i = 0; i < 3; ++i) {
		username[i] = toupper(firstname[i]);
	}
	for (i = 3; i < 5; ++i) {
		username[i] = toupper(surname[i - 3]);
	}
	for (i = 5; i < 7; ++i) {
		username[i] = year[i - 3];
	}
	username[i] = '\0';
	printf("%s\n", username);

	/*
	for (int i = 0; (inspiration[i] != '\0'); ++i) {
		putchar(inspiration[i]);
		printf("\n");
	//	printf("%d\n", inspiration[i]);
	}
	str
	*/

}
