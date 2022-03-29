/**
 * @file hangman.h
 * @author Rithu K Somaiah
 * @brief Hangman game in Terminal using C
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _HANGMAN_H_
#define _HANGMAN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Draws the hangman when user makes a mistake
 * 
 * @param[in] mistakes 
 * @return Hangman drawing
 */
void drawHangman(int mistakes);

/**
 * @brief Starts the hangman game loop
 * 
 * @return int 
 */
int startGame();

/**
 * @brief Replays the game if required by the user
 * 
 */
void replay();

#endif /* _HANGMAN_H_ */