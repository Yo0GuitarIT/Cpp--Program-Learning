#include<iostream>
#include<cstdlib>

using namespace std;

void myprint(int,char);

int main (void)
{
	int a = 6;
	char ch ='%';
	myprint(a,ch);
	cout<<"Printed!!"<<endl;

	//system("pause");
	return 0;
}

void myprint(int n,char c)
{
	int i;
	for (i = 1; i <= n; i++)
		cout<<c;
	cout<<endl;
	return;
}