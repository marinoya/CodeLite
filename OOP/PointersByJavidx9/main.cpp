 #include <iostream>
using namespace std;

int main (){
	
	/*int a = 5;
	int* b = &a;
	int c = *b;
	
	cout << "int a = " <<  a << endl;
	cout << "the value that is being pointed at by int* b = " <<  *b << endl;
	cout << "int c = " <<  c << endl;*/
	
	/*int someArray[10];
	
	int* pLocation6 = &someArray[6];
	int* pLocation0 = &someArray[0];
	
	cout << "pLocation6 = " << (intptr_t)pLocation6  << endl;
	cout << "pLocation0 = " << (intptr_t)pLocation0  << endl;
	cout << "Difference = " << pLocation6 - pLocation0  << endl;*/
	
	/*int someArray[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
		
	int* pLocation0 = &someArray[0];
	//int* pLocation0 = someArray;
	
	for (int i{0}; i < 10 ; ++i)
	{
		//cout << someArray +i << " = " << *(someArray + i) << endl;
		
		cout << pLocation0 << " = " << *pLocation0 << endl;
		pLocation0++;
	}*/
	
	
	/*char someString [] = "Hello!";
	
	char* pSomestring = someString;
	
	cout << "pSomestring = " << pSomestring<< endl;
	
	char* pLocation3 = &someString[3];
	char* pLocation0 = &someString[0];
	
	cout << "pLocation3 = " << (intptr_t)pLocation3 << endl;
	cout << "pLocation0 = " << (intptr_t)pLocation0 << endl;
	cout << "Difference = " << pLocation3- pLocation0 << endl;*/
	
	//Polymorphism
	struct Shape
	{
		virtual const char* identifyYourself()
		{
			return "Shape";
		} 
	};
	
	struct Square : public Shape
	{
		const char* identifyYourself()
		{
			return "Square";
		}
	};
	
	struct Triangle : public Shape
	{
		const char* identifyYourself()
		{
			return "Triangle";
		}
	};
	
	Shape ob_base;
	Square ob_A;
	Triangle ob_B;
	
	cout << ob_base.identifyYourself() << endl;
	cout << ob_A.identifyYourself() << endl;
	cout << ob_B.identifyYourself() << endl;
	
	cout<<"-------------------------------------------"<<endl;
	
	/*Shape objects[10];
	objects[3] = Triangle();
	
	for(int i{0}; i <10; ++i)
	{
		cout<<objects[i].identifyYourself()<<endl;
	}*/
	
	Shape** pSomeArray = new Shape*[5];
	
	pSomeArray[0] =  new Square();
	pSomeArray[1] =  new Triangle();
	pSomeArray[2] =  new Triangle();
	pSomeArray[3] =  new Shape();
	pSomeArray[4] =  new Square();
	
	for (int i{0};i<5;++i)
	{
		cout << pSomeArray[i] -> identifyYourself()<< endl;
	}
	
	
	for (int i{0};i<5;++i)
	{
		delete pSomeArray[i];
	}
	delete[] pSomeArray;
	
	
	
	
	
	cout << endl;	system("pause");	return 0;
	}