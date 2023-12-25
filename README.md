# Tic-Tac-Toe Game

## Overview
This is a simple console-based Tic-Tac-Toe game implemented in C++. The game supports two modes: 
1. **Play with Human:** You can play against another person taking turns.
2. **Play with Computer:** You can play against a computer opponent.

The game is designed to identify win and lose situations, and in other situations, it will use the `srand` function to provide a random move for the computer.

## How to Play

### 1. Play with Human
Run the program and choose the "Play with Human" option. The game will prompt you to take turns entering your moves. Each player is represented by 'X' and 'O'. The game will announce the winner or declare a tie when the game concludes.

### 2. Play with Computer
Select the "Play with Computer" option from the menu. You will play as 'X' against the computer, represented by 'O'. The computer will make its moves automatically. The game will identify if you win or lose, and in other situations, the computer will use the `srand` function to make a random move.

## Compile and Run
To compile and run the Tic-Tac-Toe game, follow these steps:

1. Open a terminal.
2. Navigate to the directory containing the source code.
3. Compile the code using a C++ compiler (e.g., g++):
