#include <iostream>
using namespace std;
#include <string.h>
#include <stdio.h>
#include <wchar.h>

int main (){
	cout << "Hello world" << endl;
	
	
	//  '\0' затварящата нула бележи края на стринга - не се вижда
	
	
	//char a;
	//a = getwchar();
	//putchar(a);
	
	
//	string str[10] = {"one","two"};
//    cout << sizeof(str)/sizeof(*str) << std::endl;
//    cout << str[0] <<endl;
//    cout << str[1] << endl;
//    cout << str[2] << endl;
//    cout << "===" << endl;
	char st[100] = "cat";
	cout << sizeof(st) << endl;
	
	/*int count = 0;
    for (int i = 0; i < sizeof(st); i++)
        if (st[i] != '\0')
            count++;
		else
			break;
    cout << count << endl;
	*/
	return 0;
	}