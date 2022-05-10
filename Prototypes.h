/* 
  Prototypes 
  	
    cs151: Prototypes.h file
    last modified on: 04/17/19                                  

  Student Name:    
 
  Note: Do not change this file

*/
#ifndef PROTOTYPES_H
#define PROTOTYPES_H

bool hasMove(char board[]);
bool horizontalWinner(char board[]);
bool verticalWinner(char board[]);
bool diagonalWinner(char board[]);
bool hasWinner(char board[]); 
void initialize(char board[]);
void displayBoard(char board[],char token, bool = true);
void makeMove(char board[],char token);
bool canPlay(char board[]);
void switchPlayer(int& player);
void printFinalResults(char board[], char token);

#endif