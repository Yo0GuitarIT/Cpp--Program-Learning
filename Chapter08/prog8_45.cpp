#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;


void compare(int ,int);

int main(void)
{
	int a =0;
	string str1;
	cout << "Enter a string:" <<endl;
	getline(cin ,str1);
	cout << "Position'the' start from:";
	cout << str1.find("the"); 
	
	return 0;
}