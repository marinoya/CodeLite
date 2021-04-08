#include <iostream>
#include <string>
//#include <cstdlib>
#include <ctime>


using namespace std;


int randomNumberGenerator ();
void printCharArray (char copy[], int size);


int main()
{
    srand(time(NULL));

    string wordList[] = { "pass", "password" , "passwd" , "pswd" , "Pas" , "Psw" };

    string word = wordList[rand() % 6];
	
	
	//Следващия част трябва да бъде произволно двуцифрено число;
	
	
	int num = randomNumberGenerator();
	
	cout << num << endl;
	
	
	
	
	//след това произволен брой от първите n(n e произволно число от 1 или повече символа от стринг) символа от стинга "CoMpl3xP@$$word135"
	
	string seed = {"CoMpl3xP@$$word135"};
	
	int first = rand() %17;
	
	cout<< "first :"<< first<< endl; 
	
	char copy[first+1] {};
	
	for (int i{0}; i<= first; ++i)
	{
		copy[i] = seed[i];
	}
		
		
	//накрая принтираме конкатениран извода от трите ни функции

    cout << "\n" << word << num ;
	printCharArray(copy, first);
	cout << endl;
    return 0;
}

int randomNumberGenerator ()
{
	int num = (rand()%100);
	
	if (num > 9)
	{
		return num;
		
	}else{
		randomNumberGenerator();
	}
	return 0;
}

void printCharArray (char copy[], int size)
{
	for (int i {0}; i <=size; ++i)
	{
		cout << copy[i];
	}
}