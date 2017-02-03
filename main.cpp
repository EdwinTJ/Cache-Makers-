#include <iostream>
#include "game.hpp"

int main()
{
  Game g;
  int turn = 0;
  int row;
  int col;
  std:: cout <<"Welcome To The Game"<< std::endl;

  bool gameOver = false;
  bool turnOver = false;

   while(gameOver == false)
   {
     g.printBoard();
     if(turn == 0)
     {
       std:: cout << "it is player one's turn" << std:: endl;
     }else{
       std:: cout <<"it is player two's turn" << std:: endl;
        }

   //dostuff


   while(turnOver == false){
 std:: cout <<"Number for Row"<< std:: endl;
 std:: cin >> row;
 std:: cout <<"Number for Column"<< std:: endl;
 std:: cin>> col;
 if (turn == 0) {
   g.board[row][col] = 'x';
 }else{
   g.board[row][col] = 'o';
   turnOver = g.makeMove(turn, row, col);
 }
 }

      if(turn == 0){
        turn = 1;
      }else{
        turn= 0;
      }
   }
}
