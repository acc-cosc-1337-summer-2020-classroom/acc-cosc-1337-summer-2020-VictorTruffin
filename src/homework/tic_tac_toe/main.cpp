#include "Tic_tac_toe.h"




int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
	int choice;

	std::cout<<"Enter X or O: ";
	std::cin>>player;

	//tic_tac_toe.start_game(player);
do
{
	tic_tac_toe.start_game(player);
	do
	{
		int position;
		std::cout<<"Enter position from 1 to 9: ";
		std::cin>>position;
		tic_tac_toe.mark_board(position);
		tic_tac_toe.display_board();

	} while (tic_tac_toe.game_over()==false);

	std::cout<<"GAME OVER \n";
	  std::cout<<"The winner is: "<< tic_tac_toe.get_winner()<<"\n";
	
	  std::cout<<"Would you like to play again, to play again press 1 to exit game press 0 \n";
	  std::cin>>choice;
	  
}while(choice != 0);


std::cout<<"GAME TERMINATED \n";

	return 0;
}