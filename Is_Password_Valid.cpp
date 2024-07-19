#include<iostream>
#include<string>
#include<cctype>
using namespace std;


bool isValid(string password)
{
	const char *c = password.c_str(); //used c_str to treat the const char as string
	int len=password.length();
	int letter_count=0;
	int digit_count=0;
	
	
	for(int i=0;i<len;i++)
	{
		if(isalnum(c[i]))
	{
	if(isalpha(c[i]))
	{
		letter_count++;
	}
	else if(isdigit(c[i]))
	{
		digit_count++;
	}
	}
	else 
	{
		cout<< "INVALID CHARACTER!\n";
		return false;
	}
	}

		//letter condition
	if(letter_count>0 && digit_count>=2 && len>=10)
	 {
        return true;
    }
    else
    {
        return false;
    }
}
	
int main()
{
	string str;
	cout<< "Enter the string: ";
	getline(cin,str);
	
	if(isValid(str))
	{
		cout << "It is a Valid password!";
	}
	else 
	{
		cout << "It is not a Valid password!";
	}
	
	return 0;
}
