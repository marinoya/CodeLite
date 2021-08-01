#include <iostream>
using namespace std;
#include <string>

//enum for address:
/*enum Address 	{A1, A2, A3, A4, A5, A6, A7, A8,
				 B1, B2, B3, B4, B5, B6, B7, B8,
				 C1, C2, C3, C4, C5, C6, C7, C8,
				 D1, D2, D3, D4, D5, D6, D7, D8,
				 E1, E2, E3, E4, E5, E6, E7, E8,
				 F1, F2, F3, F4, F5, F6, F7, F8,
				 G1, G2, G3, G4, G5, G6, G7, G8,
				 H1, H2, H3, H4, H5, H6, H7, H8	};*/
				 
				 
enum Address {A1 = 1, B1, C1, D1, E1, F1, G1, H1,
			  A2, B2, C2, D2, E2, F2, G2, H2,
			  A3, B3, C3, D3, E3, F3, G3, H3,
			  A4, B4, C4, D4, E4, F4, G4, H4,
			  A5, B5, C5, D5, E5, F5, G5, H5,
			  A6, B6, C6, D6, E6, F6, G6, H6,
			  A7, B7, C7, D7, E7, F7, G7, H7,
			  A8, B8, C8, D8, E8, F8, G8, H8 };

//creating a switch function to return addesses is the form of a string
string Addressor (&Address a){
	switch (a){
		case 1: return "A1"; break;
		case 2: return "B1"; break;
		case 3: return "C1"; break;
		case 4: return "D1"; break;
		case 5: return "E1"; break;
		case 6: return "F1"; break;
		case 7: return "G1"; break;
		case 8: return "H1"; break;
		case 9: return "A2"; break;
		case 10: return "B2"; break;
		case 11: return "C2"; break;
		case 12: return "D2"; break;
		case 13: return "E2"; break;
		case 14: return "F2"; break;
		case 15: return "G2"; break;
		case 16: return "H2"; break;
		case 17: return "A3"; break;
		case 18: return "B3"; break;
		case 19: return "C3"; break;
		case 20: return "D3"; break;
		case 21: return "E3"; break;
		case 22: return "F3"; break;
		case 23: return "G3"; break;
		case 24: return "H3"; break;
		case 25: return "A4"; break;
		case 26: return "B4"; break;
		case 27: return "C4"; break;
		case 28: return "D4"; break;
		case 29: return "E4"; break;
		case 30: return "F4"; break;
		case 31: return "G4"; break;
		case 32: return "H4"; break;
		case 33: return "A5"; break;
		case 34: return "B5"; break;
		case 35: return "C5"; break;
		case 36: return "D5"; break;
		case 37: return "E5"; break;
		case 38: return "F5"; break;
		case 39: return "G5"; break;
		case 40: return "H5"; break;
		case 41: return "A6"; break;
		case 42: return "B6"; break;
		case 43: return "C6"; break;
		case 44: return "D6"; break;
		case 45: return "E6"; break;
		case 46: return "F6"; break;
		case 47: return "G6"; break;
		case 48: return "H6"; break;
		case 49: return "A7"; break;
		case 50: return "B7"; break;
		case 51: return "C7"; break;
		case 52: return "D7"; break;
		case 53: return "E7"; break;
		case 54: return "F7"; break;
		case 55: return "G7"; break;
		case 56: return "H7"; break;
		case 57: return "A8"; break;
		case 58: return "B8"; break;
		case 59: return "C8"; break;
		case 60: return "D8"; break;
		case 61: return "E8"; break;
		case 62: return "F8"; break;
		case 63: return "G8"; break;
		case 64: return "H8"; break;
		default: cout << "Looking forward to the Weekend";
	}
}

//instead of enum will use class as Address:
/*class Address 
{
public:
	enum e;
	Address (enum e):e(e);
	
	
	
}*/

//class for Game 
	//method to start the game and to end the game as well as other stuff that isnt shown on the board
	//matt &remi




//class for square
class Square {
public:
	//constructor - only parametrized 
	
	Square(Address address):address(address){};//{cout << "parametrized Square constructor with "<<address<<" address"<<endl;}//Square(){}
	//stores address on board - a1, b2 etc
	Address address;
	//stores a figure or not
		//Figure figure;
	//overload operator << to return the value of the address
	//print function that shows address properly
	Address print ()
	{
		return address;
	}
};

//class for chessBoard
class ChessBoard {
public:
	//stores a 8x8 matrix of square objects 
	Square board [8][8] = {A8, B8, C8, D8, E8, F8, G8, H8, A7, B7, C7, D7, E7, F7, G7, H7, A6, B6, C6, D6, E6, F6, G6, H6, A5, B5, C5, D5, E5, F5, G5, H5, A4, B4, C4, D4, E4, F4, G4, H4, A3, B3, C3, D3, E3, F3, G3, H3, A2, B2, C2, D2, E2, F2, G2, H2, A1, B1, C1, D1, E1, F1, G1, H1};
	//method for drawing the current state of the board
	void print ()
	{	
		cout << "      A    B    C    D    E    F    G    H\n\n";
		for (int i = 0; i<8; ++i)
		{
			cout << 8-i << "   "; 
			for(int j = 0; j<8;++j)
			{
				cout  << " | " << board[i][j].address;
			}
			cout << "\n\n\n";
		}
	}
};
//class for figure
	//classes for types of figures inheriting figure:
	//Pawn
	//Rook
	//Knight
	//Bishop
	//Queen
	//King
		//has flag for colour of player
	
//class Player?


int main (){
	/*while (true){
		
		
		
		
		
		
	}*/
	Square s {A8};
	cout << Address(s.address) << endl;
	//cout << 
	//cout << String(s.address)<<endl;
	if (s.address==A8) {
		cout << "true"<< endl;}
	ChessBoard cb;
	cb.print();
	return 0;
	}