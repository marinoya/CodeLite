#include <iostream>
using namespace std;

//
// #ifdef WINDOWS
// std::system("cls");
// #else
// // Assume POSIX
// std::system ("clear");
// #endif



// 1. render game state
// 2. render user command prompt
// 3. parse user input
// 4. validate input (if error go back to step 1)
// 5. is legal move - is in range, square is empty.
// 6. is win ?
// check all rows
// check all cols
// check all diagonals
// 7. is draw - no legal move so draw.
/*
 1 2 3
 	|---|---|---|
 1 	| x | x | x |
 	|---|---|---|
 2 	| x | x | 	|
 	|---|---|---|
 3	| x |	| x	|
	|---|---|---|
 player one pick row and col, example (1, 1) : "1,2"
 */
const int maxRow = 3;

class Board
{	
	
	int board [maxRow][maxRow] = {};
public:
	
	void print ()
	{
		
		for (int i = 0; i<maxRow; ++i)
		{
			for(int j = 0; j<maxRow;++j)
			{
				cout<<  "| " << board[i][j] ;//<< " | " ;
			}
			cout << "\n\n\n";
		}
	}
};



int main (){
//	while(true) {​​​​​
//	
//	ClearScreen();
//	
//	
//	
	Board b;
	b.print();
	return 0;
	}