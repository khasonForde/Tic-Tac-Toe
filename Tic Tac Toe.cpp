/*
    

    cs151: main.cpp file
    last modified on: 04/17/19
    
    Note: do not change this file
	
*/
#include <iostream>
#include <string>
#include "Prototypes.h"
#include "Part1.h"
#include "Part2.h"
using namespace std;

void playGame();


int main()
{
	playGame();
	return 0;
}


void playGame()
{
	char board[9]; // as 1d array
	char tokens[2] = {'X','O'}; 
	int player = 1;
	
	//  perform initial setup 
	initialize(board);
	
	// keep playing while can play
	while(canPlay(board))
	{
		// diplay the board
		displayBoard(board,tokens[player-1]);

		// make move
		makeMove(board,tokens[player-1]);
		
		// if no winner we switch to player	
		if (!hasWinner(board)){
			switchPlayer(player);
		}
	}

    // once out of the loop display the final results
	printFinalResults(board, tokens[player-1]);

}