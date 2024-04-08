// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

void converting(void) {
/* Version 1 */
// insert here
	/*
	char intString[BUFFER_SIZE];
	int  intNumber;
	printf("*** Start of Converting Strings to int Demo ***\n");
	do {
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';
		if (strcmp(intString, "q") != 0){
			intNumber = atoi(intString);
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings to int Demo ***\n\n");
	*/
/* Version 2 */
// insert here
	printf("*** Start of Converting Strings to double Demo ***\n");
	char doubleString[BUFFER_SIZE];
	double doubleNumber;
	do {
		printf("Type the double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';
		if (strcmp(doubleString, "q") != 0) {
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);
	printf("*** End of Converting Strings to double Demo ***\n\n");

/* Version 3 */
// insert here


}
