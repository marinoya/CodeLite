#include <iostream>
using namespace std;

int main (){
	cout << "Hello world" << endl;
	topics:
	----------------
	cin
	cout
	variuabla
	const
	data types
		char
		boolean
	operators(unary, binary, trinary)
		prefix vs postfix
		(cout << i++ (int a = i++) - първо дава текущата стойниост, после инцрементира
		(cout << ++i (int a = ++i) - първо преви инкремент и после дава новата стойност към cout
		int func(int a)
		{
			return a++; - връща грешно
			return ++a; - връща правилно
		}
	if, if-else, if-else if-else
	switch case default
	loops
		for
		while
		do while
	nested loops
	rand 
	arrays (подредена редица от еднакви по тип елементи - native or user defined or objects)
		ИМЕТО НА МАСИВА Е УКАЗАТЕЛ (pointer) КЪМ ПЪРВИЯ МУ ЕЛЕМЕНТ (С ИНДЕКС НУЛА)
	functions
		prototypes and definitions
		default args(ако не пуснем аргумент функцията приема дефолтна стойност дефинирана в прототипа)(винаги трябва да са най-отдясно)
		templating (по време на дефиницията все още не знаем подадения тип данни какви ще са)
			template <typename a> a funcName (a i, int j){
				...
			}
			funcName(4.6, 6) (функцията се изпълнява с double)
		overloading (имаме няколко дефиниции на функции с едн о и съпяо име с различен брой аргументи или различен тип аргументи или и двете )
			int f(int, int)
			int f(double, int)
			double f (int, int) - не може защото се различава само по това което връща
		?? inline ?? (ако една функция има inline компилатора директно ще щ замести със сорс кода???? действа за супер простички функции)
		recursion
	pointers and references
		int add(int a, int b){
			a=9;
			b=8;
		}
		
		int x = 1;
		int b = 100;
		cout << x<<'\t'<< y << endl;
		add(x,y);
		cout <<x << '\t' << y << endl;
		

	strings
		завършваща нула'\0'
	
	
	return 0;
	}