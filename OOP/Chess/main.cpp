#include <iostream>
using namespace std;

enum Colour { WHITE, BLACK };
//enum PieceType { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN };
char numberToCharConvertor(int);
void alternate(Colour& c);
int convert(int a);
int convert(char a);
bool canMoveBishop(int fromRank, char fromFile, int toRank, char toFile);
string translateColour(Colour c);

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
	//members
	int rank;
	char file;
	Colour colour;
	Piece* piece = nullptr;
	//constructors  
	Square() {};
	Square(int a, char b, Colour c, Piece* p) :rank(a), file(b), colour(c), piece(p)
	{
		//cout << "parametrized Square constructor with " << rank << " " << file << " and " << endl;
	};
	//destructor
	~Square() {};
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
	//piece related functions
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
private:
	bool checkRookPath(int fromRank, char fromFile, int toRank, char toFile)
	{
		if (fromFile < toFile) //moving to the right
		{
			for (int i = (convert(fromFile)) + 1; i < convert(toFile); ++i)
			{
				if (board[convert(fromRank)][i].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		else if (fromFile > toFile) // moving to the left
		{
			for (int i = (convert(fromFile)) - 1; i > convert(toFile); --i)
			{
				if (board[convert(fromRank)][i].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		else if (fromRank > toRank) //moving downwards
		{
			for (int i = (convert(fromRank)) + 1; i < convert(toRank); ++i)
			{
				if (board[i][convert(fromFile)].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		else if (fromRank < toRank) //moving upwards
		{
			for (int i = fromRank - 1; i > toRank; --i)
			{
				if (board[i][convert(fromFile)].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		return false;
	}
	bool checkBishopPath(int fromRank, char fromFile, int toRank, char toFile)
	{
		if ((toRank > fromRank) && (toFile > fromFile)) //diagonal to top right
		{
			for (int i{ 1 }; i < abs(toRank - fromRank); ++i)
			{
				if (board[(convert(fromRank + i)) ][(convert(fromFile )+ i) ].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		else if ((toRank > fromRank) && (toFile < fromFile)) //diagonal to top left
		{
			for (int i{ 1 }; i < abs(toRank - fromRank); ++i)
			{
				if (board[(convert(fromRank+ i)) ][(convert(fromFile)- i) ].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		else if ((toRank < fromRank) && (toFile > fromFile)) //diagonal to bottom right
		{
			for (int i{ 1 }; i < abs(toRank - fromRank); ++i)
			{
				if (board[(convert(fromRank - i))][(convert(fromFile )+ i)].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		else if ((toRank < fromRank) && (toFile < fromFile)) //diagonal to bottom left
		{
			for (int i{ 1 }; i < abs(toRank - fromRank); ++i)
			{
				if (board[(convert(fromRank - i))][(convert(fromFile )- i)].getPiece())
				{
					cout << "There is a piece in the way!" << endl;
					cout << "Invalid move!" << endl;
					return false;
				}
			}
			return true;
		}
		return false;
	}
	
public:
	//8x8 array of squares
	Square board[8][8];
	//variable that shows both kings are still alive
	bool neitherKingIsDead{ true };
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
		cout << "  _________________________" << endl;
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

	//move method
	void move(int fromRank, char fromFile, int toRank, char toFile)
	{	
		Square* fromLocation = &board[convert(fromRank)][convert(fromFile)];
		Square* toLocation = &board[convert(toRank)][convert(toFile)];
		Piece* fromPiece = fromLocation->getPiece();
		Piece* toPiece = toLocation->getPiece();
		

		if (fromLocation == toLocation) //check if staring and ending locations are the same
		{
			cout << " \nInvalid move - you have chosen to move to the same square!" << endl;
			return;
		}
		if (fromPiece) // check if there is a piece on the starting square
		{
			//cout << "there is a piece in " << fromRank << fromFile << endl;
			if (toPiece) //check if there is a piece in the ending square
			{
				if (toPiece->colour == fromPiece->colour) //check if the two pieces are the same colour
				{
					cout << "BUT there is a piece in " << toRank << toFile << " with the same colour" << endl;
					cout << fromPiece->colour<<fromPiece->representation << endl;
					cout << "You can't attempt that!" << endl;
					return;
				}
				else
				{
					validateMove(fromRank, fromFile, toRank, toFile);
				}

			}
			else
			{
				validateMove(fromRank, fromFile, toRank, toFile);
				//executeMove(fromRank, fromFile, toRank, toFile);
				//board[convert(toRank)][convert(toFile)].setPiece(fromPiece);
				//board[convert(fromRank)][convert(fromFile)].clearPiece();
			}
		}
		else
		{
			cout << "there is NO piece in " << fromRank << fromFile << endl;
		}
	}

	//check if move is valid according to rules
	void validateMove(int fromRank, char fromFile, int toRank, char toFile)
	{
		Piece* fromPiece = (board[convert(fromRank)][convert(fromFile)]).getPiece();
		Piece* toPiece = (board[convert(toRank)][convert(toFile)]).getPiece();
		switch (fromPiece->representation)
		{
			case 'K':
			{
				//check to see if the move is legal according to rules
				if ((((fromRank == toRank) && (abs(fromFile - toFile) == 1)) ||
					((abs(fromRank - toRank) == 1) && (fromFile == toFile))) ||
					((abs(toFile - fromFile) == 1) && (abs(toRank - fromRank) == 1)))
				{
					cout << "valid vorizontal or vertical or diagonal move by 1 (King)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
					executeMove(fromRank, fromFile, toRank, toFile);
				}
				else {
					cout << "INVALID vorizontal or vertical or diagonal move by 1 (King)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
				}
				break;
			}
			case 'Q':
			{
				//check to see if the move is legal according to rules
				if ((((fromRank == toRank) && (fromFile != toFile))
					|| ((fromRank != toRank) && (fromFile == toFile)))
					|| (abs(toRank - fromRank) == abs(toFile - fromFile)))
				{
					//check if path is clear 
					if (checkPath(fromRank, fromFile, toRank, toFile))
					{
						cout << "valid vorizontal or vertical or diagonal move (QUEEN)" << endl;
						cout << fromRank << fromFile << " to " << toRank << toFile << endl;
						executeMove(fromRank, fromFile, toRank, toFile);
					}
				}
				else {
					cout << "INVALID vorizontal or vertical or diagonal move (QUEEN)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
				}
				break;
			}
			case 'R':
			{
				if (((fromRank == toRank) && (fromFile != toFile))
					|| ((fromRank != toRank) && (fromFile == toFile)))
				{
					//check path is clear
					if (checkPath(fromRank, fromFile, toRank, toFile))
					{
						cout << "valid vorizontal or vertical move (ROOK)" << endl;
						cout << fromRank << fromFile << " to " << toRank << toFile << endl;
						executeMove(fromRank, fromFile, toRank, toFile);
					}
				}
				else {
					cout << "INVALID vorizontal or vertical move (ROOK)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
				}
				break;
			}
			case 'B':
			{
				//check to see if the move is legal according to rules
				if (abs(toRank - fromRank) == abs(toFile - fromFile))
				{
					//check for pieces in the way
					if (checkPath(fromRank, fromFile, toRank, toFile))
					{
						cout << "valid diagonal move (BISHOP)" << endl;
						cout << fromRank << fromFile << " to " << toRank << toFile << endl;
						executeMove(fromRank, fromFile, toRank, toFile);
					}
				}
				else {
					cout << "INVALID diagonal move (BISHOP)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
					//return false;
				}
				break;
			}
			case 'N':
			{
				//check to see if the move is legal according to rules
				if (((abs(toRank - fromRank) == 2) && (abs(toFile - fromFile) == 1))
					|| ((abs(toRank - fromRank) == 1) && (abs(toFile - fromFile) == 2)))
				{
					cout << "Valid L-shaped kNight move" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
					executeMove(fromRank, fromFile, toRank, toFile);
				}
				else {
					cout << "INVALID L-shaped kNight move" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
				}
				break;
			}
			case 'P': //special movement for pawn
			{
				//single move forward
				if (((toFile == fromFile) && (fromPiece->colour == WHITE) && (toRank == fromRank + 1) && (!toPiece))
					|| ((toFile == fromFile) && (fromPiece->colour == BLACK) && (toRank == fromRank - 1) && (!toPiece)))
				{
					cout << "Valid single move (PAWN)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
					executeMove(fromRank, fromFile, toRank, toFile);

				}
				//double move forward
				else if (((toFile == fromFile) && (fromPiece->colour == WHITE) && (toRank == 4) &&
						(!toPiece) && ((board[convert(toRank - 1)][convert(toFile)]).getPiece() == nullptr))
						|| 
						((toFile == fromFile) && (fromPiece->colour == BLACK) && (toRank == 5) &&
						(!toPiece) && ((board[convert(toRank + 1)][convert(toFile)]).getPiece() == nullptr)))
				{
					cout << "Valid double move (PAWN)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
					executeMove(fromRank, fromFile, toRank, toFile);
				}
				//capture move
				else if (((toPiece) && ((toFile == fromFile - 1) || (toFile == fromFile + 1)) && 
						(fromPiece->colour == WHITE) && (toRank == fromRank+1)) 
						||
						((toPiece) && ((toFile == fromFile - 1) || (toFile == fromFile + 1)) && 
						(fromPiece->colour == BLACK) && (toRank == fromRank - 1)))
				{
					cout << "Valid capture move (PAWN)" << endl;

					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
					executeMove(fromRank, fromFile, toRank, toFile);
				}
				//if time permits ENPASANT MOVE goes here//else if ()...
				else {
					cout << "INVALID move (PAWN)" << endl;
					cout << fromRank << fromFile << " to " << toRank << toFile << endl;
					}
				break;
			}
			default:
			{
				cout << "INVALID selection - representation character not recognized" << endl;
			}
		}

	}

	//check to see if path is clear
	bool checkPath(int fromRank, char fromFile, int toRank, char toFile)
	{
		Piece* fromPiece = board[convert(fromRank)][convert(fromFile)].getPiece();
		Piece* toPiece = board[convert(toRank)][convert(toFile)].getPiece();
		Square* fromLocation = &board[convert(fromRank)][convert(fromFile)];
		Square* toLocation = &board[convert(toRank)][convert(toFile)];

		switch (fromPiece->representation)
		{

		case 'Q':
		{
			//check for type of movement before applying check for pieces in the path
			//check for diagonal mocement
			if (abs(toRank - fromRank) == abs(toFile - fromFile))
			{
				return  checkBishopPath(fromRank, fromFile, toRank, toFile);
			}
			//otherwise its vertical / horizontal movement
			else {
				return checkRookPath(fromRank, fromFile, toRank, toFile);
			}
		}
		case 'R':
		{
			return checkRookPath(fromRank, fromFile, toRank, toFile);
		}
		case 'B':
		{
			return checkBishopPath(fromRank, fromFile, toRank, toFile);
		}
		case 'P':
		{
		}
		default:
		{

		}
		}
	}

	//EXECUTE MOVE METHOD AND CHECK IF A KING JUST DIED
	void executeMove(int fromRank, char fromFile, int toRank, char toFile)
	{
		Piece* fromPiece = (board[convert(fromRank)][convert(fromFile)]).getPiece();
		Piece* toPiece = (board[convert(toRank)][convert(toFile)]).getPiece();

		if (toPiece)
		{
			if (toPiece->representation == 'K')
			{
				neitherKingIsDead = false;
				cout << "King " << toPiece->colour << toPiece->representation << " is dead!" << endl;
				cout << "Game Over!" << endl;
			}
		}

		board[convert(toRank)][convert(toFile)].setPiece(fromPiece);
		//board[convert(toRank)][convert(toFile)].setPiece(board[convert(fromRank)][convert(fromFile)].getPiece());
		board[convert(fromRank)][convert(fromFile)].clearPiece();
		
	}

};

class Game {
	public:
		Colour currentPlayer;
		Board gameBoard;

		//new game - initializes a board
		//flag of current player
		//while cycle that contains the game
			// at the end flips the flag
		void startGame()
		{
			currentPlayer = WHITE;

			while (gameBoard.neitherKingIsDead)
			{
				cout << "\n---------------------------------"<< endl;
				cout << endl;
				gameBoard.printBoard();
				input();
			}
		}
		//input function
		void input()
		{
			int fromRank{};
			char fromFile{};
			int toRank{};
			char toFile{};
			//explanation what to do
			cout << "\ncurrent player is :" << translateColour(currentPlayer) << endl;
			cout << "\nfrom: ";
			cin >> fromRank >> fromFile;
			cout << " \nto: ";
			cin >> toRank >> toFile;

			if (fromRank > 0 && fromRank < 9)
			{
				if (toRank > 0 && toRank < 9)
				{
					if (fromFile >= 'A' && fromFile <= 'H')
					{
						if (toFile >= 'A' && toFile <= 'H')
						{
							//check if the player colour corresponds to the piece colour
							
							Piece* fromPiece = (gameBoard.board[convert(fromRank)][convert(fromFile)]).getPiece();	
							if(fromPiece)
							{
								if (fromPiece->colour == this->currentPlayer)
								{
									gameBoard.move(fromRank, fromFile, toRank, toFile);
									alternate(this->currentPlayer);
								}
								else {
									cout << "\nYou're trying to move another player's pieces!" << endl;
									cout << "Invalid move" << endl;
								}
							}
							else
							{
								cout << "in \"From: \" You must choose a square that contains a piece that belongs to you!\nIt appears that you've entered an empty square" << endl;
							}
							
							
						}
						else {
							cout << "\nPlease make sure that you are typing characters A to H" << endl;
						}
					}
					else {
						cout << "\nPlease make sure that you are typing characters A to H" << endl;
					}
				}
				else {
					cout << "\nPlease make sure that you are typing integers 1 to 8" << endl;
				}
			}
			else {
				cout << "\nPlease make sure that you are typing integers 1 to 8" << endl;
			}
		}


	};


int main() {
	Game g;
	cout << "********************************************************" << endl;
	cout << " Please enter your move in the following pattern: " << endl;
	cout << "\t1. Input your staring address into 'From' \n\t2. Use an integer from 1 to 8 for row number A.K.A. 'Rank'\n\t3. Use a CAPITAL LETTER for  column A.K.A 'File'\n\tEXAMPLE: \n\tFrom: 2D\n\tTo: 4D\n\t\tor\n\tFrom: 2 D\n\tTo:4 D" << endl;
	cout << "********************************************************" << endl;
	cout << "Be aware that if you use an illegal move - you wont get a redo\nyou'll lose your turn as in real chess" << endl;
	cout << "********************************************************" << endl;
	cout << "Notice that the game crashes if you enter a LETTER or OTHER CHARACTER first.\nI cant figure out why, so I'm sorry for the inconvenience. " << endl;
	g.startGame();
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
		if (a >= 1 && a <= 8)
			return 8 - a;
		/*switch (a)
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
		}*/
	}
	int convert(char a)
	{
		switch (a)
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
	bool canMoveBishop(int fromRank, char fromFile, int toRank, char toFile)
	{
		if (abs(toRank - fromRank) == abs(toFile - fromFile)) {
			cout << "valid diagonal move" << endl;
			cout << fromRank << fromFile << " to " << toRank << toFile << endl;
			return true;
		}
		else {
			cout << "INVALID diagonal move" << endl;
			cout << fromRank << fromFile << " to " << toRank << toFile << endl;
			return false;
		}
		/*cout << "from: " << fromRank << fromFile << "to: " << toRank << toFile << endl;
		cout << "abs(toRank"<<toRank<<" - fromRank"<<fromRank<<") = " << abs(toRank - fromRank) << endl;
		cout << "abs(toFile"<<toFile<<" - fromFile"<<fromFile<<") = " << abs(toFile - fromFile) << endl;
		cout << endl;*/
	}
	string translateColour(Colour c)
	{
		if (c == 0)
			return "WHITE";
		if (c == 1)
			return "BLACK";
		else
			return "UNKNOWN";
	}




