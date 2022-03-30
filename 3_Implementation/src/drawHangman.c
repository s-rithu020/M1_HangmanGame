#include "hangman.h"

void drawHangman(int mistakes)
{
    if (mistakes == 0) {
      printf("_____________\n");
      printf(" |    |      \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf("_____________\n");
   } 
   else if (mistakes == 1) {
      printf("_____________\n");
      printf(" |    |      \n");
      printf(" |    O      \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf("_____________\n");
   } 
   else if (mistakes == 2) {
      printf("_____________\n");
      printf(" |    |      \n");
      printf(" |    O      \n");
      printf(" |    |      \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf("_____________\n");
   } 
   else if (mistakes == 3) {
      printf("_____________\n");
      printf(" |    |      \n");
      printf(" |    O      \n");
      printf(" |   \\|     \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf("_____________\n");
   } 
   else if (mistakes == 4) {
      printf("_____________\n");
      printf(" |    |      \n");
      printf(" |    O      \n");
      printf(" |   \\|/     \n");
      printf(" |           \n");
      printf(" |           \n");
      printf(" |           \n");
      printf("_____________\n");
   } 
   else if (mistakes == 5) {
      printf("_____________\n");
      printf(" |    |      \n");
      printf(" |    O      \n");
      printf(" |   \\|/     \n");
      printf(" |   /      \n");
      printf(" |           \n");
      printf(" |           \n");
      printf("_____________\n");
   } 
   else if (mistakes == 6) {
      printf("_____________\n");
      printf(" |    |      \n");
      printf(" |    O       \n");
      printf(" |   \\|/    \n");
      printf(" |   / \\    \n");
      printf(" |           \n");
      printf(" |           \n");
      printf("_____________\n");
   }
   return;
}//end of drawHangman()
