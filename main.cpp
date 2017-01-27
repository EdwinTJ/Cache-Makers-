#include <iostream>

char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

void printBoard(){

  for(int i= 0; i<3; ++i ){

    for (int j=0; j<3; ++j){
      std::cout << board[i][j]<<"____";
  }
  std::cout << std:: endl;
}
}


int main()
{
  std:: cout <<"Welcome To The Game"<< std::endl;
  int turn = 0;
  int row;
  int col;
  bool gameOver = false;

   while(gameOver == false)
   {
     printBoard();
     if(turn == 0)
     {
       std:: cout << "it is player one's turn" << std:: endl;
     }else{
       std:: cout <<"it is player two's turn" << std:: endl;
        }

   //dostuff
 std:: cout <<"Number for Row"<< std:: endl;
 std:: cin >> row;
 std:: cout <<"Number for Column"<< std:: endl;
 std:: cin>> col;
 if (turn == 0) {
   board[row][col] = 'x';
 }else{
   board[row][col] = 'o';
 }

      if(turn == 0){
        turn = 1;
      }else{
        turn= 0;
      }
   }
}
