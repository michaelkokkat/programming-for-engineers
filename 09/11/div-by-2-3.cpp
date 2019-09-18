#include <iostream>

using namespace std;

int main() {
	int age{ 0 };
	cout << "Enter an integer: " << endl;
	cin >> age;
	if ((age%2==0) && (age%3==0))
	{
		
		cout << "The integer is divisible by both 2 AND 3." << endl;

	}
	else
	{
	
		cout << "The integer is not divisible by both 2 AND 3." << endl;
		    
		    if ((age%2==0) || (age%3==0))
        	{
	    	
	        	cout << "The integer is divisible by either 2 OR 3." << endl;
	        	
	        	       	if (age%2==0)
        	            {
	    	
	                    	cout << "The integer is divisible by 2." << endl;
                    	}
	                     else
                    	{
	        
	                     	cout << "The integer is divisible by 3." << endl;
                    	}
        	}
	        else
        	{
	
	        	cout << "The integer is not divisible by either 2 OR 3." << endl;
        	}
	}

	return 0;
}
