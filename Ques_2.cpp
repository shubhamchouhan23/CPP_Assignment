#include <iostream>
#include <cstring>

using namespace std;

class charInput             
{
	public:
	    char curr_val;
	void add(char ch)         
	{ 
		curr_val = curr_val + ch;
	}

	string getValue()           
	{ 
		return NULL; 
	}
	
};  



class numInput : public charInput           
{ 
	public:
		int curr_val = 0;
		void add(int n)         
		{
		    n = n - '0';
            
			  if(n >= 0 && n <= 9)      
				  curr_val = curr_val*10 + n;	
		}

		int getValue()   
		{
			return curr_val;
		}
		
};  
int main()
{
	charInput* charIn = new charInput();
	numInput* numIn = new numInput();
	
	numIn->add('4');
	numIn->add('a');
	numIn->add('V');
	numIn->add('3');
	numIn->add('b');
	numIn->add('6');
	cout << numIn->getValue() << endl;
	return 0;
}
