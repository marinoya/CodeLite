#include <iostream>
using namespace std;

int main() {
    //cout << "Please choose option:\n1. По зададено цяло число от клавитурата да се изведе на екрана неговия модул.\n2. По зададено дробно число от клавитурата да се изведе на екрана само неговата дробна част.\n3. По зададена дробно число от клавитурата да се изведе на екрана само неговата цяла част.\n4. По зададена буква от клавитурата да се изведе на екрана дали буквата е малка или голяма.\n5. По зададена буква от клавитурата да се изведе на екрана коя подред е съответната буква в азуката(Пример a e 1; c e 3; j e 10 и т.н.) Програмата трябва да работи както с малки така и с големи букви.\n6. Да се намери сборът на четните цифри на дадено цяло число. Числото се вкарва от клавиатурата.\n7. Да се намери произедението на нечетните цифри на дадено цяло число. Числото се вкарва от клавиатурата.\n8. Да се изкара на екрана таблицата за умножение от 1 до 10.\n9. Дадени са две променливи а и b. Разменете техните стойности, а да вземе стойността на b и обратно.\n10. Да се изведе сбора на цифрите на всички двицифрени числа в зададен диапазон от такива (диапазона се въвежда от клавиатурата)" << endl;
    int choice {0};
    do{
		cout << " \n\nChoose between 1 - 10" << endl;
        cin >> choice;
        switch (choice){
            case 1: {
                //1. По зададено цяло число от клавитурата да се изведе на екрана неговия модул.
                cout << "1. Please enter a whole number" << endl;
                int a {0};
                cin >> a;
                if(a<0){
                    cout << "the modulus of " << a << " is "<< -a << endl; 
                }else{
                     cout << "the modulus of "<< a << " is " << a << endl;}
					 
            }
			break;
            case 2: {
                //2. По зададено дробно число от клавитурата да се изведе на екрана само неговата дробна част.
                 cout << "2. Please enter a fractional number" << endl;
                 double b {0};
                 cin >> b ;
                 if ( b>1 || b<-1 ){
                     int b1 = b;
                     b-=b1;}
                 cout << "the fractional part of the number is: " << b << endl;
            }
			break;
            case 3: {
                //3. По зададена дробно число от клавитурата да се изведе на екрана само неговата цяла част.*/
                cout << "3. Please enter a fractional number" << endl;
                double c {0};
                cin >> c ;
                int c1 = c;
                cout << "the whole part of the number is: " << c1 << endl;
            }
			break;
            case 4: {
                //4. По зададена буква от клавитурата да се изведе на екрана дали буквата е малка или голяма.
                cout << "4. Please eneter a character" << endl;
                char d;
                cin >> d;
                if(d>='A' && d<='Z'){
                    cout<< "the character "<<d<<" is CAPITAL!"<< endl;
                }else if (d>='a' && d<= 'z'){
                    cout <<"The character "<<d<<" is lower case."<<endl;}
            }
			break;
            case 5: {
                //5. По зададена буква от клавитурата да се изведе на екрана коя подред е съответната буква в азуката
                //Пример: a e 1; c e 3; j e 10 и т.н. 
                //Програмата трябва да работи както с малки така и с големи букви.
                char e;
                cout << "Please enter a character: ";
                cin >> e;
                cout<< endl;
                if (e >= 'a' && e <= 'z'){
                    int e1 = e;
                    if(e == 'a'){
                        cout << "The letter "<< e << " is the "<< e1-96 <<"st letter in the aphabet" << endl;
                        }else if (e == 'b'){
                            cout << "The letter "<< e << " is the "<< e1-96 <<"nd letter in the aphabet" << endl;
                        }else if (e =='c'){
                            cout << "The letter "<< e << " is the "<< e1-96 <<"rd letter in the aphabet" << endl;
                        }else{
                            cout << "The letter "<< e << " is the "<< e1-96 <<"th letter in the aphabet" << endl; 
                        }
                    }else if (e >='A' && e <='Z'){
                    int e1 = e;
                    cout << "The letter "<< e << " is the "<< e1-64 <<"th letter in the aphabet" << endl;}
            }
			break;
            case 6: {
                //6. Да се намери сборът на четните цифри на дадено цяло число. Числото се вкарва от клавиатурата.
                int f {0};
                cout << "Please enter a whole number: ";
                cin >> f;
				if(f<0){
					f=-f;
					}
                cout << endl;
                int f1 {0};
                while (f > 1){
                    if ((f%10)%2==0){
						f1+=f%10;
                        }
					f/=10;
                    }
				cout << "\nThe sum of all even digits is :"<< f1 << endl;
				break;
            }
            case 7: {//7. Да се намери произедението на нечетните цифри на дадено цяло число. Числото се вкарва от клавиатурата.
				int g{0};
				int g1{0};
				cout << "\nPlease enter a whole number"<< endl;
				cin >>g;
				if(g<0){
					g=-g;
					}
				while (g>1){
					if((g%10)%2!=0){
						g1+=g%10;
						}
					g/=10;}
					cout << "\nThe sum of all uneven digits is :" << g1<<endl;
				break;
				}
			case 8: {//8. Да се изкара на екрана таблицата за умножение от 1 до 10.
				for (int i = 1; i < 11; i++){
					for (int j =1; j< 11; j++){
						cout <<i<< " * "<<j<<" = "<< i*j << " | ";
						}
						cout << " \n------------------------------------------------------------------------------------------------------------------- "<< endl;
					}
				break;
				}
			case 9: {//9. Дадени са две променливи а и b. Разменете техните стойности, а да вземе стойността на b и обратно.
				int n1 {0}, n2 {0};
				cout <<"\nPlease enter 2 numbers: ";
				cin >> n1 >> n2;
				cout << "\nThe first number is : " << n1 <<"\nThe second number is : " << n2 <<"\nSwitching now ..."<<endl;
				n1 = n1 + n2;
				n2 = n1 - n2;
				n1 = n1 - n2;
				cout <<"\nThe switched values are: "<< n1<<" and "<<n2<<endl;
				break;
				}
			case 10: {//10. Да се изведе сбора на цифрите на всички двицифрени числа в зададен диапазон от такива (диапазона се въвежда от клавиатурата)
				int n1 {0}, n2 {0}, n3 {0}, , ee {0};
				cout << "\nPlease enter two numbers for a range: ";
				cin >> n1 >> n2;
				if ((n1/100 > 0)&&(n2/100>0)){
					cout << "\nAt lease one number should be single or double digit"<< endl;
					break;}
				if (n2 > n1){
					int n3 = n1;
					n1 = n2;
					n2 = n3;
					}
				int ss = n1;	
				if (n1 < 10){
					ss = 10;
					}
				int ee = n2;
				if (ee > 99){
					ee = 99;
					}
				for (int i = ss; i <= ee;i++){
					n3 += (i%10+i/10);
					}
//				for (int i = n1; i <= n2; i++){
//					if (i > 9 && i < 100){
//						int n3 += (i%10 + i/10);
//						}
//					}
				cout <<"Sum of all digits of double-digit numbers is: "<< n3;
//				while (n1 < n2){
//					
//					}
				}
            default: break;
    }
        }while(true);
    return 0;
}