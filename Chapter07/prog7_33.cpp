#include<iostream>
#include<cstdlib>
using namespace std;

double triangle(int base=2,int height=1);

int main(void)
{
	cout << triangle() <<endl;
	cout << triangle(10) <<endl;
	cout << triangle(12,3) <<endl;
	
	system("pause");
	return 0;
}

double triangle(int base,int height)
{	
	cout << "Base=" << base << ", Height=" << height <<endl;
	cout << "triangle("<< base <<","<< height <<")=";
	
	return base*height/2.0;
}