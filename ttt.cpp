

/*
 * Author: Adler Nunez
 * Date: 18/09/2024
 *
 * Description:
 * This project is a simple implementation of the classic game Tic-Tac-Toe, created as part of my learning journey in C++.
 * The project demonstrates the use of functions, loops, and basic control structures, without utilizing
 * classes or objects. It was developed during the functions chapter of my CodeAcademy course.
 *
 * About Me:
 * Hi there! I'm Adler Nunez, a beginner in C++ currently exploring the world of programming and software
 * development. I'm passionate about learning new technologies and improving my coding skills.
 * Feel free to check out my other projects and connect with me on GitHub!
 *
 * Project Details:
 * - Project Name: Tic-Tac-Toe (C++)
 * - Features: A simple text-based Tic-Tac-Toe game where players can make moves and check for a win or draw.
 * - Tools Used: C++ (functions, loops)
 *
 * Enjoy exploring this project and happy coding!
 */




#include<iostream>
#include "ttt.hpp"
int s;
int updated_s;
std::vector<char> board(9, ' ');
char p1='x';
char p2='o';
char currentPlayer = p1;  // Start with Player 1 (X)
bool fill=false;
int main()
{   

//*********************************************************************************************************************************
    std::cout<<"XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
    std::cout<<"XO                       OX\n";
    std::cout<<"XO      TICK TAC TOE     OX\n";
    std::cout<<"XO                       OX\n";
    std::cout<<"XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
    std::cout<<" Tic-Tac-Toe: Where X's,O's\n"
             <<"            and\n"
             <<" accidental genius collide!\n";

        
    do {
// Display options
        std::cout << "1. Play\n";
        std::cout << "2. About\n";
        std::cout << "3. Exit\n";
        std::cin >> s; // Get user input

// Call introduction function and get result
        updated_s = introduction(s);

// If the result is 0, the choice was invalid and the loop will repeat
        } while (updated_s == 0);

// Handle the exit condition
     if (updated_s == 3) {
             std::cout << "Goodbye!\n";
             return 0; // Exit the program
             }
//*********************************************************************************************************************************
    while(s!=1)
        {
            std::cout<<" Press 1 to continue\n"; // continue to game after the introduction and chosing play
            std::cin>> s;
        }
//*********************************************************************************************************************************   

        

for (int turn = 0; turn < 9; ++turn) {
    draw(board);  // Display the board

    take_turn(board, currentPlayer);  // Player takes their turn

    if (is_winner(board, currentPlayer)) {
            draw(board);  // Display the final board
            std::cout << "Player " << currentPlayer << " wins!\n";
            end_game(board, currentPlayer); // End the game with the winner
            return 0; // Exit the program
        }

    if (filled_up(board)) {
            draw(board);  // Display the final board
            std::cout << "XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
            std::cout << "XO  XOX XOX XOX XOX XOX  OX\n";
            std::cout << "XO                       OX\n";
            std::cout << "XO      It's a draw      OX\n";
            std::cout << "XO                       OX\n";
            std::cout << "XO  XOX XOX XOX XOX XOX  OX\n";
            std::cout << "XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
            return 0; // Exit the program
        }

    // Switch to the next player (X to O or O to X)
    change_player(currentPlayer);

    // After each turn, you can check if there's a winner, etc.
}
//*********************************************************************************************************************************



  
   









}


