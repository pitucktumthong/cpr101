// MANIPULATING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include"manipulating.h"

/* Version 1 */
void manipulating(void) {
	char string1[BUFFER_SIZE] ;
	char string2[BUFFER_SIZE] ;

	printf("*** Start of Concatenating Strings Demo ***\n");
	do{
		printf("Enter the first string (type 'q' to quit): \n");
		fgets(string1, BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';
		if ((strcmp(string1, "q") != 0)) {
			printf("End the second string: \n");
			fgets(string2, BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';
			strcat(string1, string2);
			printf("Concatenating string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);
	printf("*** End of Concatenating Strings Demo ***\n\n");
}

/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here



