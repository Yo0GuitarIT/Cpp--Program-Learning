#include <iostream>
#include <cstdlib>
using namespace std;

void repeat(int);

int main(void)
{	
	
	repeat(3);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	repeat(10);
	//system("pause");
	return 0;
}

void repeat(int a)
{
	for (int i=1; i<=a ; i++)
		cout<<"Hello,C++"<<endl;
	return;
}