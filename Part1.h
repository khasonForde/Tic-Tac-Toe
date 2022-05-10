/*
	Part1

    cs151: Part1.h file
    last modified on: 04/17/19
     

	Student Name: Khason Forde 

	Note: Only modify the function definitions; 
        do not change the function headers or everything 
        else in this file. See pdf file for the 
        requirements for each function.   
*/

#ifndef PART1_H
#define PART1_H
#include <iostream>
using namespace std;

bool hasMove(char board[])
{	
	// Todo: Finish the Definition as described in the pdf file
  bool status;
  if (board[0] == ' '|| board[1] == ' '|| board[2] == ' ' || board[3] == ' ' || board[4] == ' ' || board[5] == ' ' || board[6] == ' ' || board[7] == ' ' || board[8] == ' ')
  {
  status = true;
  } else 
  { 
    status = false;
  }
  return status;
}

bool horizontalWinner(char board[])
{
	// Todo: Finish the Definition as described in the pdf file
  bool status;
if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') 
  { status = true;
} else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X')       
  {status = true;}
else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X')         
  {status = true;} 
else if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') 
  {status = true;
} else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')       
  {status = true;}
else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')        
  {status = true;} 
else {status = false;}
return status;
}

bool verticalWinner(char board[])
{ 
  bool status;
  if (board[0] == 'X' && board[3] == 'X' && board[6]== 'X') 
  {
    status = true;
  } 
else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X')         
  {
    status = true;
  }
else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X')
    {
      status = true;
    }
else if (board [0] == 'O' && board[3] == 'O' && board[6]== 'O') 
  {
    status = true;
  } 
else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')         
{
  status = true;
}
else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
  {
    status = true;
  }
else 
  { 
    status = false;
  }	
  return status;
}

bool diagonalWinner(char board[])
{
  // Todo: Finish the Definition as described in the pdf file
bool status;
if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
  {status = true ;} 
else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X')
  {status = true;} 
  else if (board[0] == 'O'&& board[4] == 'O' && board[8] == 'O')
  {return true;}
  else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O')
  {return true;}
else {status = false;}
return status;
}

bool hasWinner(char board[])
{ 
	// Todo: Finish the Definition as described in the pdf file
  bool status;
  if (diagonalWinner(board) == true || verticalWinner(board) == true || horizontalWinner(board) == true) {
  status = true;
  } else {status = false;}
  return status;
}

#endif