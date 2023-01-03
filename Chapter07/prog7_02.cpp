#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int num = 5;
	int &rm = num;    //宣告rm為num的參照

	rm=rm+10;
	
	cout<<"num="<<num<<endl;
	cout<<"rm="<<rm<<endl;

	//system("pause")
	return 0;
}