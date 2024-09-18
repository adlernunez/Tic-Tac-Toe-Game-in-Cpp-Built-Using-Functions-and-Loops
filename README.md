# Tic-Tac-Toe Game in C++ using Functions & Loops
 Welcome to my Tic-Tac-Toe project! 🎉 This game was built using C++ functions and loops—no classes or objects here. Why? Because this project was part of my CodeAcademy course, where I was diving into functions.  This project is a fun demonstration of what you can do with functions alone. Hope you enjoy playing, and thanks for checking it out!

## Project Structure
- **`ttt.cpp`**: The main file that includes the game loop and user interaction.
- **`ttt_functions.cpp`**: Contains implementations for the game functions.
- **`ttt.hpp`**: Header file with function declarations and includes.

## How the Game Works

## Starting the Game:

The game displays an empty 3x3 grid, with each cell numbered from 1 to 9.

Players use these numbers to decide where to place their mark.

## Player Turns:

Player 1 is "X" and Player 2 is "O".

Players take turns selecting a number (1-9) to place their mark on the grid.

The game ensures the input is valid (number within range and unoccupied cell).

## Winning the Game: 

After each turn, the game checks for any of the following winning combinations:

Three marks in a row (horizontally, vertically, or diagonally).

If a player achieves a winning combination, they are declared the winner.

## Game End:

The game ends when:

One player wins, or

The board is filled, and there is no winner (draw).

## Restart or Exit: 
After a game concludes, players can choose to restart the game or exit.

## Controls

1. Player Input: Players enter a number between 1 and 9 to place their mark.

2. Valid Moves: If a player selects an invalid number (outside the 1-9 range) or
   a cell that's already occupied, they will be prompted to try again.

## Key Features

1. Built using functions and loops (no classes or objects).

2. Simple text-based gameplay.

3. Input validation ensures a smooth experience.



## How to Compile

To compile the Tic-Tac-Toe game, follow these steps:

1. **Open Terminal or Command Prompt**: Navigate to the directory containing your project files.

2. **Compile the Project**: Use the following `g++` command to compile the project:

    ```
    g++ ttt.cpp ttt_functions.cpp -o ttt
    ```

    - `ttt.cpp` and `ttt_functions.cpp`: Source files to compile.
   

3. **Run the Executable**: After compilation, run the executable with:

    ```
    ./ttt
    ```

## Project Structure
- **`ttt.cpp`**: The main file that includes the game loop and user interaction.
- **`ttt_functions.cpp`**: Contains implementations for the game functions.
- **`ttt.hpp`**: Header file with function declarations and includes.

## Notes
- Ensure you have `g++` installed on your system. You can download it as part of the GCC (GNU Compiler Collection) if needed.
- If you encounter any errors, make sure all files are in the same directory and correctly referenced.

Enjoy the game and happy coding!
