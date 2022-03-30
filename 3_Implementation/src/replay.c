#include "hangman.h"

void replay()
{
    int choice = FALSE;
    char selected[MAXWORDS];
    while (choice == FALSE) {
        printf("Do you want to play again? (y/n)\n");
        scanf("%9999s", &selected[0]);
        if (selected[0] == 'y') {
            choice = TRUE;
            startGame();
            printf("\n\n");
        } 
        else if (selected[0] == 'n') {
            choice = TRUE;
            exit(0);
        } 
        else {
            printf("Invalid input. Try again.\n\n");
        }
    }//end of while loop
    return;
}