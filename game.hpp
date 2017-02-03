#ifndef GAME_H
#define GAME_H

class Game{
public:
  char board[3][3];
  void printBoard(){

    for(int i= 0; i<3; ++i ){

      for (int j=0; j<3; ++j){
        std::cout << board[i][j];
        if(j < 2)
        {
          std::cout << "|";
        }
    }
    std::cout << std::endl;
    if(i < 2){
      std::cout << " -----" << std::endl;
    }
    //std::cout << std:: endl;
  }
  }
  Game(){
    for(int i= 0; i<3; ++i ){

      for (int j=0; j<3; ++j){
        board[i][j] = ' ';
    }
  }

  }

  bool makeMove(int turn, int rowIn, int coLIn)
  {

    if (rowIn <0 || rowIn >2 || coLIn <0 || coLIn >2){
      std::cout << "That idn't a valid Move!!"<< std::endl;
      return false;
    }else if (board[rowIn][coLIn] != ' '){
      std::cout  << "That Move is taken" << std:: endl;
    }


    if (turn == 0)
    {
      board[rowIn][coLIn] = 'x';
    }
    else
    {
      board[rowIn][coLIn] = '0';
    }
    return true;
  }
private:




};

#endif
