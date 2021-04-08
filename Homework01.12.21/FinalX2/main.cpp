#include <iostream> 
using namespace std; 


//Function returning the Longest Sequence of positive numbers


int getLongestSeq (int a[], int n);
 
int main() {
    int arr[] = {1,2,3,4,5,-1,-1,1,2,3,-1, 1, 10, 3, 4, 5, 6, 7, -1 }; 
    int n = sizeof(arr);
    getLongestSeq(arr, n); 
return 0; }
 

int getLongestSeq (int a[], int n) 
{
	int maxLen = 0, currLen = 0; 
	for (int i {0}; i<n; ++i) 
	{ 
		if (a[i] > 0) 
		{
			currLen++; 
		}
		else
		{
			if (currLen > maxLen) 
			{
				maxLen = currLen; 
			}
			currLen = 0; 
        }
	}

    if (maxLen > 0)
	{ 
        cout << "Length " << maxLen <<endl;     
	}else{
		cout << "No positive sequence detected." << endl; 
	}
    
    return maxLen; 
}




