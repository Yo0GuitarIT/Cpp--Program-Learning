#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int num;

	cout<<"Input an integer:";
	cin>>num;

	if (num%2==0)
	{
		cout<<num<<" is Even. "<<endl;
	}
	else
	{
		cout<<num<<" is Odd. "<<endl;
	}
	


	//system("pause")
	return 0;
		
}