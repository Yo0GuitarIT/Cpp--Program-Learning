#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
	int a=0,b=0;
	string str1;
	string str2;
	cout << "Input first string :";
	getline(cin ,str1);
	cout << "Input second string :";
	getline(cin ,str2);
	
	a=str1.length();
	b=str2.length();
	
	cout << "str1.length()=" << str1.length() <<endl;
	cout << "str2.length()=" << str2.length() <<endl;
	
	if(a==b)
		cout << "length : str1 = str2" << endl;
	else
		cout << "length : st1r =! str2" << endl;
	
	return 0;
}