//cpp
#include "Tic_tac_toe.h"


bool TicTacToe::game_over()
{
    if(check_column_win()==true)
    {
        set_winner();
        return true;
    }
    if(check_row_win()==true)
    {
        set_winner();
        return true;
    }
    if(check_diagonal_win()==true)
    {
        set_winner();
        return true;
    }
    if(check_board_full()==true)
    {
        winner == "C";
        return check_board_full();
    }

return false;
}

void TicTacToe::mark_board(int position)
{
     pegs[position-1] = player;
     set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

 void TicTacToe::display_board()const
 {
     for(std::size_t i=0;i<pegs.size();i+=3)
     {
         std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
     }
 }

void TicTacToe::set_next_player()
{
    if(player=="X")
    {
        player="O";
    }
    else
    {
       player = "X";
    }
    
}

bool TicTacToe::check_board_full()const
{
for(auto peg: pegs)
 {
    if(peg==" ")
      {
    return false;
     }
  }

  return true;
}

void TicTacToe::clear_board()
{
    for(std::size_t i=0;i<pegs.size();++i)
    {
        pegs[i]= " ";
    }
}

bool TicTacToe::check_column_win()
{
    

    if(pegs[0]=="X" && pegs[3]=="X" && pegs[6]== "X")
    {
        
        return true;
    }
    if(pegs[1]=="X" && pegs[4]=="X" && pegs[7]== "X")
    {
        return true;
    }
    if(pegs[2]=="X" && pegs[5]=="X" && pegs[8]== "X")
    {
        return true;
    }
//
    if(pegs[0]=="O" && pegs[3]=="O" && pegs[6]== "O")
    {
        return true;

    }
    if(pegs[1]=="O" && pegs[4]=="O" && pegs[7]== "O")
    {
        return true;
    }
    if(pegs[2]=="O" && pegs[5]=="O" && pegs[8]== "O")
    {
        return true;
    }

return false;
}

bool TicTacToe::check_row_win()
{

if(pegs[0]=="X" && pegs[1]=="X" && pegs[2]== "X")
    {
        return true;
    }
    if(pegs[3]=="X" && pegs[4]=="X" && pegs[5]== "X")
    {
        return true;
    }
    if(pegs[6]=="X" && pegs[7]=="X" && pegs[8]== "X")
    {
        return true;
    }
//
    if(pegs[0]=="O" && pegs[1]=="O" && pegs[2]== "O")
    {
        return true;

    }
    if(pegs[3]=="O" && pegs[4]=="O" && pegs[5]== "O")
    {
        return true;
    }
    if(pegs[6]=="O" && pegs[7]=="O" && pegs[8]== "O")
    {
        return true;
    }

return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0]=="X" && pegs[4]=="X" && pegs[8]== "X")
    {
        return true;
    }
    if(pegs[6]=="X" && pegs[4]=="X" && pegs[2]== "X")
    {
        return true;
    }
//
    if(pegs[0]=="O" && pegs[4]=="O" && pegs[8]== "O")
    {
        return true;

    }
    if(pegs[6]=="O" && pegs[4]=="O" && pegs[2]== "O")
    {
        return true;
    }

    return false;
}

void TicTacToe::set_winner()
{
    
    if(player == "X")
    {
        winner = "O";
    }
    else 
    winner == "X";

    
    
}

std::string TicTacToe::get_winner()
{
    return winner;
}




