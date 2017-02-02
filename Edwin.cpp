#include <iostream>



int main (){

  std::cout <<"What Number Do You Want?"<< std::endl;
  int Number;
  std::cin >> Number ;
  if (Number%2 == 0)
     {
       std::cout <<"Number is Even!"<< std::endl;
     }
  if (Number% 2== 1)
     {
       std::cout <<"Number is Od!"<< std::endl;

     }
}
