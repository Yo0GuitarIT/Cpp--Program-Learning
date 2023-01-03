#include<iostream>
#include<cstdlib>
using namespace std;
#include "D:\Yo0\Program C++\Chapter07\myhfile.h"

int main(void)
{
	int X,Y;
	cout << "input X & Y:" << endl;
	cout <<"X = ";
	cin >> X;
	cout <<"Y = ";
	cin >> Y;
	
	cout << X << "+" << Y << "=" << sum(X,Y)<<endl;
	cout << max(X,Y)<<" is bigger.";
	system("pause");
	return 0;
	 
}