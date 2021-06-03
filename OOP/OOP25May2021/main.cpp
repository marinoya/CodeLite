#include <iostream>
using namespace std;

class Queue{
	int size;
	int headOfQueue;
	int *p;
	
public:
	
	Queue()
	{
		size = 0;
		p = new int[100];
		headOfQueue = 0;
	}
	
	void add (int x)
	{
		p[size] = x;
		size++;
	}
	
	void remove()
	{
		if(size>0 && size>=headOfQueue)
		{
			headOfQueue ++;
		}
	}
	
	
	void print ()
	{
		for (int i = headOfQueue; i<size; i++)
		{
			cout << p[i] << " ";
		}
		cout << endl;
	}
};

int main (){
	//cout << "Hello world" << endl;
	Queue q1;
	q1.add(5);
	q1.add(6);
	q1.add(7);
	q1.remove();
	q1.print();
	
	
	return 0;
	}