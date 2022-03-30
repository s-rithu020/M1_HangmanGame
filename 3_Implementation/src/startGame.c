#include "hangman.h"

int startGame()
{
    char guessWords[MAXWORDS][MAXLEN];
    int wordsRead = 0;
    FILE *fwords;
    fwords = fopen("words.txt", "r");
    char input[64];
    srand(time(NULL));

    if(fwords == NULL) {
        printf("Error opening word file.\n");
        return 0;
    }
    
    while(fgets(input, 63, fwords)) {
		sscanf(input, "%63s", guessWords[wordsRead]);
		wordsRead++;
	}

    int wordNum = rand()%wordsRead;
    char *word = &guessWords[wordNum][0];
    int counter;

    fclose(fwords);
    int solutionSts = FALSE;
    int mistakes = 0;

    int solutionArray[(int)strlen(word)];
    for (counter = 0; counter < strlen(word); counter++) {
        solutionArray[counter] = 0;
    }

    int statusArray[(int)strlen(word)];
    for (counter = 0; counter < strlen(word); counter++) {
        statusArray[counter] = 0;
    }

    printf("\n\t>>>>>>>>>>>>>>>>>WELCOME TO THE HANGMAN GAME<<<<<<<<<<<<<<<<<");
    printf("\n\n\t\tGuess the words with less than 6 mistakes to win!"
           "\n\tIf you guess a letter wrong, a piece of the man will be drawn."
           "\n\t\tYou lose if the man's drawing is completed.\n\n");

    printf("The word contains %d letters.\n", (int)strlen(word));
    while ((solutionSts == FALSE) && (mistakes < 6)) {
        printf("-------------------------------------------\n");
        printf("Enter a letter in lowercase: ");

        char alphabet[MAXWORDS];
        scanf(" %999s", &alphabet[0]);

        int unsolvedAlpha = 0;
        for (counter = 0; counter < strlen(word); counter++) {
            if (word[counter] == alphabet[0]) {
               statusArray[counter] = 1;
            } 
            else {
               statusArray[counter] = 0;
               unsolvedAlpha++;
            }
        }

        if (unsolvedAlpha == strlen(word)) {
            mistakes++;
            printf("You have made %d mistakes.\n", mistakes);
            drawHangman(mistakes);
        }
        else {
            printf("You guessed a letter correctly!\n");
        }


        counter = 0;
        while (counter < strlen(word)) {
            if ((statusArray[counter] == 0) && (solutionArray[counter] == 0)) {
                solutionArray[counter] = 0;
            } 
            else {
               solutionArray[counter] = 1;
            }
            counter++;
        }

        for (counter = 0; counter < strlen(word); counter++) {
            statusArray[counter] = 0;
        }

        int solvedAlpha = 0;
        for (counter = 0; counter < strlen(word); counter++) {
            if (solutionArray[counter] == 1) {
                solvedAlpha++;
            }
        }

        if (solvedAlpha == strlen(word)) {
            solutionSts = TRUE;
        }

        for (counter = 0; counter < strlen(word); counter++) {
            if (solutionArray[counter] == 0) {
               printf(" _");
            } 
            else if (solutionArray[counter] == 1) {
               printf(" %c", word[counter]);
            }
        }

        printf("\n\n");
    } //end of while loop

    if (mistakes == 6) {
        printf("You Lost! The Man was Hanged.\n");
        printf("The correct word was: %s\n\n", word);
        replay();
    } 
    else {
        printf("You Win!\nYou guessed the word correctly!\n\n");
        replay();
    }
    return 0;
} //end of startGame()