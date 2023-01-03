#include<iostream>
#include<cstdlib>
using namespace std;

double avg(int a,int b=5,int c=7);

int main(void)
{
	cout << avg(13) <<endl;
	cout << avg(9,13) <<endl;
	cout << avg(8,17,3) <<endl;
	
	system("pause");
	return 0;
}

double avg(int a,int b,int c)
{	
	cout << "a=" << a << ",b=" << b << ",c=" << c <<endl;
	cout << "avg("<< a <<","<< b <<","<< c <<")=";
	
	return(a+b+c)/3.0;
}