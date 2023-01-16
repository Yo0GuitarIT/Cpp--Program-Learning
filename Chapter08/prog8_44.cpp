#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;


void compare(int ,int);

int main(void)
{
	string str1,str2;
	str1.assign("Practice makes perfect");
	str2.assign("Haste makes waste");
	
	cout << str1 << endl;
	cout << str2 << endl;
	
	if(str1.compare(str2)==0)
		cout << "str1 == str2" << endl;
	else
		cout << "str1 != str2" << endl;
	
	return 0;
}