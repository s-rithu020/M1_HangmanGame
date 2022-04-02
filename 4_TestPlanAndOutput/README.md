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
