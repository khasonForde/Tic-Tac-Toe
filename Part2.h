#ifndef PART2_H
#define PART2_H
#include "Prototypes.h"
using namespace std;

void initialize(char board[])
{
	// Todo: Finish the Definition as described in the pdf file
  for (int i= 0; i <= 8; i++) 
  {
    board[i] = ' ';
  }
}

void displayBoard(char board[],char token,bool show_msg)
{
	// Todo: Finish the Definition as described in the pdf file
  if (show_msg == true)
  {
  cout << "player using " << token << " turn to move" << endl;} 
  else {
    cout << "                 "<< endl;
    cout << "                 "<< endl;
      }
  cout << " +---+---+---+ " << endl;
  cout << " | " << board[0] << " | " << board[1] << " | " << board[2] << " |"<< endl;
  cout << " +---+---+---+ " << endl;
  cout << " | " << board[3] << " | " << board[4] << " | " << board[5] << " |"<< endl;
  cout << " +---+---+---+ " << endl;
  cout << " | " << board[6] << " | " << board[7] << " | " << board[8] << " |"<< endl;
  cout << " +---+---+---+ " << endl;
}

void makeMove(char board[],char token)
{
	// Todo: Finish the Definition as described in the pdf file	
  int move;
  cout << "Please enter the position of your next move" << endl;
  cin >> move;
    if (move >= 0 &&move <= 8 && board[move] == ' ') 
      {
        board[move] = token;
      } else { 
        cout << "[[[ This move is not valid: you lost your move" << endl;
      }
      
  }


bool canPlay(char board[])
{
	// Todo: Finish the Definition as described in the pdf file
  bool status = false;
  for (int i = 0; i <=8; i++) 
  {
    if (board[i] == ' ') {
      status = true;
      break;
    } 
  }
  return status && hasWinner(board)== false;
}

void switchPlayer(int& player)
{
	// Todo: Finish the Definition as described in the pdf file
  
  if (player == 1) 
    {
    player = 2;
    } else if (player == 2)
      {
      player = 1;
      }
  }    


void printFinalResults(char board[], char token) 
{
  displayBoard(board,token,false);
  if (hasWinner(board)== true) 
  {
    cout << token << " won the game" << endl;
  } else 
    {
      cout << "its a draw" << endl;
    }
}

#endif