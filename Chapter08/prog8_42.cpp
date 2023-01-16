#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
	string str1("Time flies");
	string str2(str1);
	string str3(10,'x');
	
	cout<< str1 << endl;
	cout<< str2 << endl;
	cout<< str3 << endl;
	
	return 0;
}