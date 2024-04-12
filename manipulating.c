// MANIPULATING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define MAX_LENGTH 100

#include"manipulating.h"

/* Version 1 */
/*
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
*/

/* Version 1 */
/*
void manipulating(void) {
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	int result;

	printf("*** Start of Comparing Strings Demo ***\n");
	do {
		printf("Type the 1st string to compare (type 'q' to quit): \n");
		fgets(compare1, BUFFER_SIZE, stdin);
		compare1[strlen(compare1) - 1] = '\0';
		if ((strcmp(compare1, "q") != 0)) {
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin);
			compare2[strlen(compare2) - 1] = '\0';
			result = strcmp(compare1,compare2);
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n",compare1, compare2);
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}
	} while (strcmp(compare1, "q") != 0);
	printf("*** End of Comparing Strings Demo ***\n\n");
}

/* Version 3 */
//>> insert here
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

void manipulating(void) {
    char string1[MAX_LENGTH];
    char string2[MAX_LENGTH];
    char *found;

    printf("=== String Searching ===\n");
    do {
        printf("Enter the first string (type 'q' to quit): ");
        scanf("%[^\n]", string1);
        clearInputBuffer(); //clear buffer
        if (strcmp(string1, "q") != 0) {
            printf("Enter the substring: ");
            scanf("%[^\n]", string2);
            clearInputBuffer(); //clear buffer

            // Search for string2 in string1
            found = strstr(string1, string2);
            if (found) {
                printf("'%s' found at position %ld\n", string2, found - string1 + 1);
            } else {
                printf("'%s' not found in the string\n", string2);
            }
        }
    } while (strcmp(string1, "q") != 0);

    printf("Exiting...\n");
}
