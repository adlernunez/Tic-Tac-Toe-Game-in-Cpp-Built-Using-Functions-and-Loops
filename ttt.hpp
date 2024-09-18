#include<iostream>
#include<vector>


int introduction(int s);
void draw(const std::vector<char>& board);
void take_turn(std::vector<char>& board, char& currentPlayer);
void set_position(std::vector<char>& board, int position, char player) ;
void update_board(std::vector<char>& board, int position, char player);
void change_player(char& currentPlayer);
bool filled_up(const std::vector<char>& board);
bool is_winner(const std::vector<char>& board, char player);
void end_game(const std::vector<char>& board, char winner);