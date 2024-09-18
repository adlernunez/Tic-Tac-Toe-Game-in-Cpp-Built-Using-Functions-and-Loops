# Tic-Tac-Toe Game in C++ using Functions
 Welcome to my Tic-Tac-Toe project! 🎉 This game was built using C++ functions and loops—no classes or objects here. Why? Because this project was part of my CodeAcademy course, where I was diving into functions.  This project is a fun demonstration of what you can do with functions alone. Hope you enjoy playing, and thanks for checking it out!

## Project Structure
- **`ttt.cpp`**: The main file that includes the game loop and user interaction.
- **`ttt_functions.cpp`**: Contains implementations for the game functions.
- **`ttt.hpp`**: Header file with function declarations and includes.

This project is a console-based implementation of the classic Tic-Tac-Toe game, written in Cpp using functions and loops. Two players take turns marking their symbols ("X" or "O") on a 3x3 grid. The goal is to be the first player to get three marks in a row—either horizontally, vertically, or diagonally. If all nine spaces are filled without a winner, the game ends in a draw.

How the Game Works
Starting the Game:

The game begins by displaying an empty 3x3 grid, where each cell is numbered from 1 to 9. Players will use these numbers to choose where to place their mark.
Player Turns:

Player 1 uses "X" and Player 2 uses "O". Each player takes turns selecting a number (1-9) corresponding to a cell. The game ensures that the selected cell is valid and unoccupied.
Checking for a Winner:

After each move, the game checks for a winner by evaluating all possible winning combinations (rows, columns, and diagonals). If one player gets three of their marks in a row, they win.
Game End:

The game ends when either a player wins or all cells are filled, resulting in a draw.
Restart or Exit:

After the game ends, players have the option to restart the game or exit.
Controls
Player Input: Players choose a number between 1 and 9 to place their mark on the grid.
Valid Moves: If a player selects a number outside the valid range or an occupied cell, they will be prompted to enter a valid number.


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
