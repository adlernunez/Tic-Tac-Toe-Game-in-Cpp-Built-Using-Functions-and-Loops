
#include"ttt.hpp"




//introduction
#include <iostream>

// Function to display options and handle user input
//*********************************************************************************************************************************
int introduction(int s) {
    switch (s) {
        case 1:
            std::cout << "           Welcome to Tic-Tac-Toe!\n"
                      << "\n"
                      << " X vs. O   :   Choose your side.\n"
                      << " player 1 is X and player 2 is O\n\n"
                      << " Goal      :   Get 3 of your marks in a row (horizontal, vertical, or diagonal).\n"
                      << " Take Turns:   Place your mark, then let your opponent go.\n"
                      << " Draw      :   If the board fills up without a winner, it's a draw!\n";
            return s; // Return choice

        case 2:             // about section
            std::cout<<"XOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
            std::cout<<"XOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOX\n\n";
            std::cout << " Hey there! I'm Adler Nunez, and this Tic-Tac-Toe game is my C++ brainchild.\n";
            std::cout << " This project is all about learning and having a blast with coding in C++.\n"
                      << " Think of it as my way of making the classic game of X's and O's a little more... digital.\n";
            std::cout << "\n";
            std::cout << " Why Tic-Tac-Toe?\n"
                      << " - Classic Fun: Because who doesn't love a good game of X vs. O?\n"
                      << " - Learning: It's a hands-on way to master C++ and dive into programming logic.\n"
                      << " - Personal Touch: I promise this game is made with 100% Adler-approved code and a sprinkle of humor.\n";
            std::cout << "\n";
            std::cout << " Game On!\n"
                      << " Whether you're here to challenge a friend or just see how I've turned this classic into a coding adventure,\n"
                      << " I hope you enjoy playing as much as I enjoyed building it.\n"
                      << " Remember: May the best mark win, and may your C++ skills grow as fast as the game's score!\n\n";
            std::cout<<"XOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
            std::cout<<"XOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
            std::cout << "\nPress any key to return to the main menu.\n";
            std::cin.ignore();
            std::cin.get(); // This will wait for any key press
            return 0; // Return 0 to indicate that the menu should be shown again
            

        case 3:         //exit
            std::cout << " Exiting the game. Thanks for playing!\n";
            return 3; // Return choice

        default:
            std::cout << "Invalid choice. Please select 1, 2, or 3.\n";
            return 0; // Return 0 to indicate invalid choice
    }
}

// Drawing the board
//*********************************************************************************************************************************
void draw(const std::vector<char>& board)
    {

    std::cout << "      |      |      \n";

    std::cout << "  " << board[0] << "   |  " << board[1] << "   |  " << board[2] << "\n";

    std::cout << "_____1|_____2|_____3 \n";
    std::cout << "      |      |       \n";

    std::cout << "  " << board[3] << "   |  " << board[4] << "   |  " << board[5] << "\n";

    std::cout << "_____4|_____5|_____6 \n";
    std::cout << "      |      |      \n";

    std::cout << "  " << board[6] << "   |  " << board[7] << "   |  " << board[8] << "\n";
    std::cout << "     7|     8|     9 \n";

    std::cout << "\n";

    }

//take turns
//*********************************************************************************************************************************
void take_turn(std::vector<char>& board, char& currentPlayer) {
    int position;

    // Prompt the current player to select a position
    std::cout << "Player " << currentPlayer << " : Select the box (1-9) \n";
    std::cin >> position;

    // Validate the position input
    while (position < 1 || position > 9 || board[position - 1] != ' ') {
        std::cout << "Invalid input or position already taken. Enter again: ";
        std::cin >> position;
    }
   
    // Set the player's move using the set_position function
    update_board(board, position, currentPlayer);    
}

//sets position
//*********************************************************************************************************************************
void set_position(std::vector<char>& board, int position, char player) {
    // Place the player's mark ('X' or 'O') on the board at the specified position
    board[position - 1] = player;  // Board is 0-indexed, so subtract 1 from position
}

//updating the board
//*********************************************************************************************************************************
void update_board(std::vector<char>& board, int position, char player) {
    set_position(board, position, player);  // Use set_position to update the board
}

//change player
//*********************************************************************************************************************************
void change_player(char& currentPlayer)
{
char p1='x';
char p2='o';

currentPlayer = (currentPlayer == p1) ? p2 : p1;
}

//filled up or draw
//*********************************************************************************************************************************
bool filled_up(const std::vector<char>& board) {
    for (char cell : board) { // Iterate over each cell in the board
        if (cell == ' ') { // If there's an empty cell
            return false; // Board is not filled
        }
    }
    return true; // Board is filled
}

//is winner
//*********************************************************************************************************************************
bool is_winner(const std::vector<char>& board, char player) {
    // Define win conditions for Tic-Tac-Toe
    const int wins[8][3] = {
        {0, 1, 2}, // Top row
        {3, 4, 5}, // Middle row
        {6, 7, 8}, // Bottom row
        {0, 3, 6}, // Left column
        {1, 4, 7}, // Middle column
        {2, 5, 8}, // Right column
        {0, 4, 8}, // Diagonal '\'
        {2, 4, 6}  // Diagonal /
    };
  
    // Check each win condition
    for (const auto& win : wins) {
        if (board[win[0]] == player && board[win[1]] == player && board[win[2]] == player) {
            return true;
        }
    }
    return false;
}

//endgame
//*********************************************************************************************************************************
void end_game(const std::vector<char>& board, char winner) {
     draw(board);  // Display the final board

    if (winner == ' ') {
        // It's a draw
        std::cout << "XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
        std::cout << "XO  XOX XOX XOX XOX XOX  OX\n";
        std::cout << "XO                       OX\n";
        std::cout << "XO      It's a draw      OX\n";
        std::cout << "XO                       OX\n";
        std::cout << "XO  XOX XOX XOX XOX XOX  OX\n";
        std::cout << "XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
    } else {
        // We have a winner
        std::cout << "XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
        std::cout << "XO  XOX XOX XOX XOX XOX  OX\n";
        std::cout << "XO                       OX\n";
        std::cout << "XO   Player " << winner << " wins!      OX\n";
        std::cout << "XO                       OX\n";
        std::cout << "XO  XOX XOX XOX XOX XOX  OX\n";
        std::cout << "XOXOXOXOXOXOXOXOXOXOXOXOXOX\n";
    }

    std::cout << "Game over. Thanks for playing!\n";
}
//*********************************************************************************************************************************
