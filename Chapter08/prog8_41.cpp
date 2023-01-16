#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void repeat(int,string);

int main (void)
{
	repeat(3,"Hello,C++");
	repeat(10,"Ilove C++");
	
	system("pause");
	return 0;
}

void repeat(int k,string SSS)
{
	for(int i=0; i<k; i++)
		cout << SSS << endl;
	cout << endl;
	return;
}
