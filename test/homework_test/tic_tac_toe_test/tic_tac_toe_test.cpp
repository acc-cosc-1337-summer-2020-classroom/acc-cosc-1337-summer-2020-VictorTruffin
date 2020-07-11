#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify game ends when board is full")
{

TicTacToe tic_tac_toe;
tic_tac_toe.start_game("X");

tic_tac_toe.mark_board(1);
REQUIRE(tic_tac_toe.game_over()==false);

tic_tac_toe.mark_board(2);
REQUIRE(tic_tac_toe.game_over()==false);

tic_tac_toe.mark_board(3);
REQUIRE(tic_tac_toe.game_over()==false);

tic_tac_toe.mark_board(4);
REQUIRE(tic_tac_toe.game_over()==false);
tic_tac_toe.mark_board(5);
REQUIRE(tic_tac_toe.game_over()==false);
tic_tac_toe.mark_board(7);
REQUIRE(tic_tac_toe.game_over()==false);
tic_tac_toe.mark_board(6);
REQUIRE(tic_tac_toe.game_over()==false);
tic_tac_toe.mark_board(9);
REQUIRE(tic_tac_toe.game_over()==false);
tic_tac_toe.mark_board(8);
REQUIRE(tic_tac_toe.game_over()==true);

}

TEST_CASE("SETTING PLAYER TO 'O' OR 'X'")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player()=="X");

	tic_tac_toe.start_game("O");

	REQUIRE(tic_tac_toe.get_player()=="O");

}

//im not sure how to write the write this section of assigning x to 147 ext, I have nothing to use as reference 
//
/*
TEST_CASE("CHEKING WIN BY COLUMN")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over()==true);

}
*/