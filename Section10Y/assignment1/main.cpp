#include <iostream>
#include <string>
using namespace std;

int main (){
	//cout << "Hello world" << endl;
	
	string input {};
	cout << "Please input your string :";
	getline(cin, input);
	
	size_t len = input.size();
	
	if (len != 0)
	{
		
		for(size_t i = 0; i < len; ++i)
		{
			for(int halflen = ((len/2+3)-i); halflen >=0; --halflen)
			{
				cout << " ";
			}
			size_t j;
			for(j = 0; j<=i; ++j)
			{
				cout << input[j];
			}
			for(int k = i-1; k>=0; k--)
			{
//				if(i==0){
//					break;
//				}
				cout << input[k];
			}
			cout << endl;
		} 
		
		
		
		
		
	}else{
		cout << "invalid entry" << endl;
	}
	
	
	
	
	
	return 0;
	}
	
	
	// Letter Pyramid
// Written by Frank J. Mitropoulos

#include <iostream>
#include <string>


int main()
{
    std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
}