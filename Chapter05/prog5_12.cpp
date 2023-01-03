#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int num;

	cout<<"Input an integer:";
	cin>>num;

	if (num < 0)
	{
		cout<<"| "<<num<<" |= "<<0-num<<endl;
	}
	else
	{
		cout<<"| "<<num<<" |= "<<num<<endl;
	}
	


	//system("pause")
	return 0;
		
}