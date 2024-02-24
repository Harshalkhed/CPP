/* To do
Declare appropriate variables for
Player Health
Lives Count
Player Id
Win Percentage
has the player won?
Type of Player (A/B/C/D)
Fill up this variable by taking input in the console.
Display all the values of the variables after taking input and represent all the values as player stats.
  */

#include <iostream>

int main() {
  int playerHealth;
  int livesCount;
  int playerId;
  float winPercentage;
  bool hasPlayerWon;
  char playerType;
  
  std::cout << "Enter Player Health: ";
  std::cin >> playerHealth;
  
  std::cout<<"Enter Lives Count: ";
  std::cin >> livesCount;
  
  std::cout<<"Enter Player ID: ";
  std::cin >> playerId;
  
  std::cout<<"Enter Win Percentage: ";
  std::cin >> winPercentage;
  
  std::cout << "Has the player won? (1 for true, 0 for false): ";
  std::cin >> hasPlayerWon;
  
  std::cout<<"Enter Player Type (A/B/C/D): ";
  std::cin >> playerType;

  //Player stats
  std::cout<<"Player Stats:"<<std::endl;
  std::cout<<"Player Health: "<<playerHealth<<std::endl;
  std::cout<<"Lives Count: "<<livesCount<<std::endl;
  std::cout<<"Player ID: "<<playerId<<std::endl;
  std::cout<<"Win Percentage: "<<winPercentage<<std::endl;
  std::cout << "Has the player won? " << (hasPlayerWon ? "Yes" : "No") << std::endl;
  std::cout<<"Player Type: "<<playerType<<std::endl;

  
  

  

  
    
}