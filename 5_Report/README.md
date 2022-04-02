# Hangman Game

## Introduction
* Hangman is a quick and easy game for two people, requiring just paper and pencil. One of the players, the "host", makes up a secret word. The other player has to try and guess this word by asking which of the letters of the alphabet it contains. However, every wrong guess brings them one step closer to losing the game. 
* In this project, the "host" is the computer which plays against the human, who is the "other player". The computer randomly chooses a word from a word list and asks the player to guess the word within six tries.


## Research
### Objectives:
   * A random word is chosen as the "secret word".
   * The player has to try and guess this word within six tries.
   * The game is won if the player can manage to guess the word within six or less tries.
   * The game is lost if the player fails to guess the word within six tries, after which the hangman will be completely drawn.

### Benefits:
   * Increases spelling and vocabulary
   * Can be played anytime
   * Enhances cognitive skills
   * Game is played against a computer host which doesn't make mistakes unlike a human host


## Features
* Player gets six tries to guess the word
* Word to be guessed is selected randomly from a pool of 1000 words
* Game can be replayed many times
* A Hangman figure is drawn each time a mistake is made
* Game can be exited when required

## SWOT Analysis
![SWOT Analysis for Hangman](https://user-images.githubusercontent.com/70939522/160652290-10b053a8-9dab-4a33-a6ad-97993c177820.png)


## 4W's and 1'H
### Who:
Hangman is prevalently played by children. For adults, parents and teachers, this game can be a great tool to get children or students engaged in learning new words and improving their vocabulary.

### What:
Hangman is, essentially, a word guessing game. It increases a child or students' mastery in understanding the meaning of words, in spelling words and  in pronouncing the words. It also improves their ability to use words based on the context.

### When: 
The game can be played by children for enjoyment or learning. It can be played during classroom hours, coordinated by the teacher in-charge. It can also be played in homes, among a child and their parent, or among a child and their friends.

### Where:
The game can be played in the classroom, as a learning activity, or at home, for leisure.

### How:
Hangman can be played on a piece of paper with a pencil. It is also available online and can be played with a keyboard and mouse.

## Detail Requirements
### High Level Requirements:

| ID | Description | Status |
| ---- | ------------------- | ---- |
| HR01 | Player can access the main menu of the game | Implemented |
| HR02 | Player should be able to quit the game whenever required | Implemented |
| HR03 | Player can replay the game if required | Implemented |
| HR04 | Player should be able to select the length of the words | Future |
| HR05 | Repeatedly guessing the same letter present in word isn't counted as a new guess | Implemented |
| HR06 | Player should be able to see a list of letters not guessed yet | Future |
| HR07 | Player should be able to change the difficulty of the game | Future |


### Low Level Requirements:

| ID | Description |	Status |
| ---- | -------------- | ----- |
| LR01 | Multiple letters entered will not be counted individually | Implemented |
| LR02 | Updates the hangman figure each time a wrong guess is entered | Implemented |
| LR03 | Input can be given regardless of the letter case | Future |
| LR04 | Shows the time taken to complete one round of the game | Future |
| LR05 | Other game statistics to be shown  |	Future |
| LR06 | Shows a row of dashes for each letter in the word | Implemented |
| LR07 | Duplicate letters in a word are not counted individually  | Implemented |


## Best Methods to be Followed:
* Messages are displayed (printf statements) only when necessary and for player's convenience
* Used arrays to accept inputs from player and store the values 
* Usage of functions to reduce dependency on main function
* Header files were created to use program functions for other c files
* Unit testing was done to avoid errors in the code


# Architecture

## Structural Diagrams
![structural design](https://user-images.githubusercontent.com/70939522/161392052-69d1578b-a8a3-49fa-9907-187114d77399.png)


## Behavioural Diagrams
### High Level Design
![hangman_flowchart](https://user-images.githubusercontent.com/70939522/160670136-0bd8f64e-00ff-46a9-bd14-c459023c6c04.jpg)


### Low Level Design
![Low level design](https://user-images.githubusercontent.com/70939522/160672255-62a78f45-8c0b-42ed-afb4-196170babe89.png)


# Test Plan and Output

## High Level Test Plan
| Test ID | Description                                              | Exp I/P | Exp O/P | Actual O/P | Type Of Test |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H_01 | Start menu, choices displayed | Enter choice | Choice selected | Choice selected | Scenario |
| H_02 | Word to be guessed is selected randomly from word list | Secret word | Number of letters | Number of letters | Technical |
| H_03 | Player guesses a letter | Letter | Dashes for each letter | Dashes for each letter | Technical |
| H_04 | After player finishes a round | Letter | Display message based on result | Display message based on result | Technical |
| H_05 | Replay Game | Enter choice | Replay game | Replay game | Scenario |
| H_07 | Exit Game | Enter choice | Exit game | Exit game | Scenario |


## Low Level Test Plan
| Test ID | Description                                              | Exp I/P | Exp O/P | Actual O/P | Type Of Test |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| L_01 | Player enters '1' for Start Game | Enter Choice | Start game | Start game | Technical |
| L_02 | Player enters '2' for Exit Game | Enter Choice | Exit game | Exit game | Technical |
| L_03 | Player enters any other character | Other characters | Invalid choice | Invalid choice | Technical |
| L_04 | Player guesses correct letter | Letter | Displays correct letter | Displays correct letter | Technical |
| L_05 | Player guesses wrong letter | Letter | Displays number of mistakes and increments hangman figure | Displays number of mistakes and increments hangman figure | Technical |
| L_06 | Player guesses word successfully | Letter | Display win message | Display win message | Technical |
| L_07 | Player fails to guess word | Letter | Display fail message | Display fail message | Technical |
| L_08 | When game is replayed | Enter choice 'y' | Displays Start menu | Displays Start menu | Technical |
| L_09 | When game is not replayed | Enter choice 'n' | Exit | Exit | Technical |


