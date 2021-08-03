#include <iostream>
using namespace std;

enum Colour { WHITE, BLACK };
//enum PieceType { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN };
char numberToCharConvertor(int);
void alternate(Colour &c);

class Piece {
public:
	const Colour colour;

	virtual ~Piece() = 0; // Makes this an abstract base class.
	//PieceType type{};
	string name;
	//move checker : can move to square method
	//virtual void print() = 0;
protected:
	Piece(Colour c) :colour(c) {};
};

Piece::~Piece() {};

class King : public Piece {
public:
	const char representation = 'K';

	//King(Colour c): colour(c) {};
	King(Colour c):Piece(c) {};
	void print() {
		cout << this->colour << " " << representation << endl;
	}

	~King() {};

};

class Queen : public Piece {
public:
	const Colour colour;
	const char representation = 'Q';

	
};

class Rook : public Piece {
public:
	const Colour colour;
	const char representation = 'R';
};

class Bishop : public Piece {
public:
	const Colour colour;
	const char representation = 'B';
};

class Knight : public Piece {
public:
	const Colour colour;
	const char representation = 'N';
};

class Pawn : public Piece {
public:
	const Colour colour;
	const char representation = 'P';
};



class Square {
public:
	int rank;
	char file;
	Colour colour;
	//constructors  
	Square() {};
	Square(int a, char b, Colour c) :rank(a), file(b), colour(c)
	{
		//cout << "parametrized Square constructor with " << rank << " " << file << " and " << endl;
	};
	//print funtion
	void printSquare()
	{
		if (colour == WHITE)
		{
			cout << "|##";
		}
		else
		{ 
			cout << "|__"; 
		}
		
	}
	//piece

};

class Board {
public:
	//8x8 array of squares
	Square board[8][8];

	//constructor that initialized the squares on the board with the correct rank and file

	Board()
	{	
		Colour c = WHITE;
		for (int i{ 0 }; i < 8; ++i)
		{
			for (int j{ 0 }; j < 8; ++j)
			{
				board[i][j] = Square(8 - i, (char)j + 65, c);
				alternate(c);
			}
			alternate(c);
		}
	};
	//print method
	void printBoard() {
		cout << "  |A |B |C |D |E |F |G |H |" << endl;
		for (int i{ 0 }; i < 8; ++i)
		{
			cout << 8 - i<<" ";
			for (int j{ 0 }; j < 8; ++j)
			{
				 board[i][j].printSquare();
			}
			cout << "|"<< endl;
			
		}
	}


	//move method
};

class Game {
public:
	Colour currentPlayer;
	Board gameBoard;

	//new game - initializes a board
	//flag of current player
	//do-while cycle that contains the game
		// at the end flips the flag
	void newGame() 
	{	
		currentPlayer = WHITE;
		while (true) 
		{

		}


	}
	
};


int main() {

	Board b;
	b.printBoard();


	King k(WHITE);
	k.print();
	King k2(BLACK);
	k2.print();
	return 0;
}


void alternate(Colour& c) 
{
	if (c == WHITE)
	{
		c = BLACK;
	}
	else {
		c = WHITE;
	}
}