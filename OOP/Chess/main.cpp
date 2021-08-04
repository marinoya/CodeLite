#include <iostream>
using namespace std;

enum Colour { WHITE, BLACK };
//enum PieceType { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN };
char numberToCharConvertor(int);
void alternate(Colour& c);
int convert(int a);
int convert(char a);

class Piece {
public:
	const Colour colour;
	const char representation;
	virtual ~Piece() = 0; // Makes this an abstract (pure virtual?) class.
	//PieceType type{};
	string name;
	//move checker : can move to square method
	virtual void print() {};

protected:
	Piece(Colour c, char r) :colour(c), representation(r) {};
};

Piece::~Piece() {};

class King : public Piece {
public:
	//const char representation = 'K';

	//King(Colour c): colour(c) {};
	King(Colour c) :Piece(c, 'K') {};

	void print() {
		cout << numberToCharConvertor(this->colour) << representation << endl;
	}

	~King() {};

};

class Queen : public Piece {
public:
	Queen(Colour c) :Piece(c, 'Q') {};

	void print() {
		cout << numberToCharConvertor(this->colour) << representation << endl;
	}

	~Queen() {};


};

class Rook : public Piece {
public:
	Rook(Colour c) :Piece(c, 'R') {};

	void print() {
		cout  << numberToCharConvertor(this->colour) << representation << endl;
	}

	~Rook() {};
};

class Bishop : public Piece {
public:
	Bishop(Colour c) :Piece(c, 'B') {};

	void print() {
		cout << numberToCharConvertor(this->colour) << representation << endl;
	}

	~Bishop() {};
};

class Knight : public Piece {
public:
	Knight(Colour c) :Piece(c, 'N') {};

	void print() {
		cout <<numberToCharConvertor(this->colour) << representation << endl;
	}

	~Knight() {};
};

class Pawn : public Piece {
public:
	Pawn(Colour c) :Piece(c, 'P') {};

	void print() {
		cout << numberToCharConvertor(this->colour) << representation << endl;
	}

	~Pawn() {};
};



class Square {
public:
	int rank;
	char file;
	Colour colour;
	//constructors  
	Square() {};
	Square(int a, char b, Colour c, Piece* p) :rank(a), file(b), colour(c), piece(p)
	{
		//cout << "parametrized Square constructor with " << rank << " " << file << " and " << endl;
	};
	//print funtion
	void printSquare()
	{
		if (!piece)
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
		else {
			cout << "|" << numberToCharConvertor(piece->colour) << piece->representation;
			//cout << "|";
			//piece->print();
		}
	}
	//piece related stuff
	Piece* piece = nullptr;
	Piece* getPiece()
	{
		return piece;
	}
	void setPiece(Piece* p)
	{
		piece = p;
	}
	void clearPiece()
	{
		piece = nullptr;
	}
};

class Board {
public:
	//8x8 array of squares
	Square board[8][8];
	//inilialize objects for each piece
	Rook bR1 = Rook(BLACK);
	Knight bN1 = Knight(BLACK);
	Bishop bB1 = Bishop(BLACK);
	Queen bQ = Queen(BLACK);
	King bK = King(BLACK);
	Bishop bB2 = Bishop(BLACK);
	Knight bN2 = Knight(BLACK);
	Rook bR2 = Rook(BLACK);

	Pawn bP1 = Pawn(BLACK);
	Pawn bP2 = Pawn(BLACK);
	Pawn bP3 = Pawn(BLACK);
	Pawn bP4 = Pawn(BLACK);
	Pawn bP5 = Pawn(BLACK);
	Pawn bP6 = Pawn(BLACK);
	Pawn bP7 = Pawn(BLACK);
	Pawn bP8 = Pawn(BLACK);

	Rook wR1 = Rook(WHITE);
	Knight wN1 = Knight(WHITE);
	Bishop wB1 = Bishop(WHITE);
	Queen wQ = Queen(WHITE);
	King wK = King(WHITE);
	Bishop wB2 = Bishop(WHITE);
	Knight wN2 = Knight(WHITE);
	Rook wR2 = Rook(WHITE);

	Pawn wP1 = Pawn(WHITE);
	Pawn wP2 = Pawn(WHITE);
	Pawn wP3 = Pawn(WHITE);
	Pawn wP4 = Pawn(WHITE);
	Pawn wP5 = Pawn(WHITE);
	Pawn wP6 = Pawn(WHITE);
	Pawn wP7 = Pawn(WHITE);
	Pawn wP8 = Pawn(WHITE);

	//constructor that initialized the squares on the board with the correct rank and file
	Board()
	{
		Colour c = WHITE;
		board[0][0] = Square(8, 'A', WHITE, &bR1);
		board[0][1] = Square(8, 'B', BLACK, &bN1);
		board[0][2] = Square(8, 'C', WHITE, &bB1);
		board[0][3] = Square(8, 'D', BLACK, &bQ);
		board[0][4] = Square(8, 'E', WHITE, &bK);
		board[0][5] = Square(8, 'F', BLACK, &bB2);
		board[0][6] = Square(8, 'G', WHITE, &bN2);
		board[0][7] = Square(8, 'H', BLACK, &bR2);
		board[1][0] = Square(7, 'A', BLACK, &bP1);
		board[1][1] = Square(7, 'B', WHITE, &bP2);
		board[1][2] = Square(7, 'C', BLACK, &bP3);
		board[1][3] = Square(7, 'D', WHITE, &bP4);
		board[1][4] = Square(7, 'E', BLACK, &bP5);
		board[1][5] = Square(7, 'F', WHITE, &bP6);
		board[1][6] = Square(7, 'G', BLACK, &bP7);
		board[1][7] = Square(7, 'H', WHITE, &bP8);
		for (int i{ 2 }; i < 6; ++i)
		{
			for (int j{ 0 }; j < 8; ++j)
			{
				board[i][j] = Square(8 - i, (char)j + 65, c, nullptr);
				alternate(c);

			}
			alternate(c);
		}
		board[6][0] = Square(2, 'A', WHITE, &wP1);
		board[6][1] = Square(2, 'B', BLACK, &wP2);
		board[6][2] = Square(2, 'C', WHITE, &wP3);
		board[6][3] = Square(2, 'D', BLACK, &wP4);
		board[6][4] = Square(2, 'E', WHITE, &wP5);
		board[6][5] = Square(2, 'F', BLACK, &wP6);
		board[6][6] = Square(2, 'G', WHITE, &wP7);
		board[6][7] = Square(2, 'H', BLACK, &wP8);

		board[7][0] = Square(1, 'A', BLACK, &wR1);
		board[7][1] = Square(1, 'B', WHITE, &wN1);
		board[7][2] = Square(1, 'C', BLACK, &wB1);
		board[7][3] = Square(1, 'D', WHITE, &wQ);
		board[7][4] = Square(1, 'E', BLACK, &wK);
		board[7][5] = Square(1, 'F', WHITE, &wB2);
		board[7][6] = Square(1, 'G', BLACK, &wN2);
		board[7][7] = Square(1, 'H', WHITE, &wR2);

	};
	//print method
	void printBoard() {
		cout << "  |A |B |C |D |E |F |G |H |" << endl;
		cout << "  _________________________"<< endl;
		for (int i{ 0 }; i < 8; ++i)
		{
			cout << 8 - i << " "; //prints a column of ints(rank)
			for (int j{ 0 }; j < 8; ++j)
			{
				board[i][j].printSquare(); //calls the Square print function
			}
			cout << "|" << endl;

		}
		cout << "  _________________________" << endl;
	}
	//some method to address a square on the board
	void move(int fromRank, char fromFile, int toRank, char toFile)
	{
		if (board[convert(fromRank)][convert(fromFile)].getPiece())
		{
			cout << "there is a piece in " << fromRank << fromFile << endl;
			if (board[convert(toRank)][convert(toFile)].getPiece())
			{
				cout << "BUT there is a piece in " << toRank << toFile << endl;
				cout << "Invalid move" << endl;
			}
			else 
			{
				board[convert(toRank)][convert(toFile)].setPiece(board[convert(fromRank)][convert(fromFile)].getPiece());
				board[convert(fromRank)][convert(fromFile)].clearPiece();
			}
		}
		else
		{
			cout << "there is NO piece in " << fromRank << fromFile << endl;
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
	b.board[7][0].clearPiece();
	b.board[7][1].clearPiece();
	b.printBoard();
	
	b.move(8,'A',4,'A');
	b.printBoard();
	return 0;
}

//Hvarchashti funkcii
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
char numberToCharConvertor(int a)
{
	if (a == 0) {
		return 'w';
	}
	else {
		return 'b';
	}
}
int convert(int a)
{
	switch (a)
	{
	case 8: return 0;
		break;
	case 7: return 1;
		break;
	case 6: return 2;
		break;
	case 5: return 3;
		break;
	case 4: return 4;
		break;
	case 3: return 5;
		break;
	case 2: return 6;
		break;
	case 1: return 7;
		break;
	}
}
int convert(char a)
{
	switch(a)
	{
	case 'A': return 0; 
		break;
	case 'B': return 1;
		break;
	case 'C': return 2;
		break;
	case 'D': return 3;
		break;
	case 'E': return 4;
		break;
	case 'F': return 5;
		break;
	case 'G': return 6;
		break;
	case 'H': return 7;
		break;
		}
}





