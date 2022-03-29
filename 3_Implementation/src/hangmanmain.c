#include "hangman.h"

int main()
{
    int option;
    printf("\n\t\t\t    :::::::::::::::::::::::");
	printf("\n\t\t\t    :::			:::");
	printf("\n\t\t\t    :::     HANGMAN	:::");
	printf("\n\t\t\t    :::			:::");
	printf("\n\t\t\t    :::::::::::::::::::::::");
    printf("\n\n");
    printf("------------MENU--------------\n");
    printf("Enter a choice:\n1 -> Start the game.\n2 -> Exit\nEnter your choice: ");
    scanf("%d", &option);
    switch(option) {
        case 1: startGame();
            break;
        case 2: printf("Exiting game...");
            exit(0);
        default: printf("Invalid Choice.\n");
            break;
    }
    replay();
    return 0;
} //end of main()
