#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;


int main(void)
{
	int n = 3;
	string str="information";
	cout << "The string is ==>" << str << endl;
	
	cout << str.substr(n) << endl;
	return 0;
}

