// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		1000
#include "tokenizing.h"

void tokenizing(void) {
/* Version 1 */
// insert here
/*
	char words[BUFFER_SIZE];
	char* nextWord = NULL;
	int wordsCounter;

	printf("*** Start of Tokenizing Words Demo ***\n");
	do {
		printf("Type a few words separated by space (q - to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) {
			nextWord = strtok(words, " ");
			wordsCounter = 1;
			while (nextWord) {
				printf("Word %d is	\'%s\'\n",wordsCounter++,nextWord);
				nextWord = strtok(NULL, " ");
			}
		}
	} while (strcmp(words, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");
*/
/* Version 2 */
// insert here
	/*
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char		phrases[BUFFER_SIZE] ;
	char* nextPhrase = NULL;
	int	phrasesCounter;

	do {
		printf("Type a few phrases separated by comma(q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0';
		if (strcmp(phrases, "q") != 0) {
			nextPhrase = strtok(phrases, ",");
			phrasesCounter = 1;
			while (nextPhrase) {
				printf("Pharse %d is	\'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
	*/
/* Version 3 */
// insert here
    printf("*** Tokenizing Strings ***\n");

    char string[BUFFER_SIZE];
    char *token;
    int sentenceCounter = 1;

    while (sentenceCounter == 1) {
        printf("Type a sentence (type '.' to end or 'q' to quit): ");
        fgets(string, BUFFER_SIZE, stdin);

        // Remove newline character
        string[strcspn(string, "\n")] = '\0';

        if (strcmp(string, "q") == 0) {
            printf("Exiting...\n");
            break;
        }

        token = strtok(string, ".");
        while (token != NULL) {
            printf("Sentence #%d is '%s'\n", sentenceCounter++, token);
            token = strtok(NULL, ".");
        }
    }

    printf("*** End ***\n\n");
}