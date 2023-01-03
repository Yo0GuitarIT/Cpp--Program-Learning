#include<iostream>
#include<cstdlib>

using namespace std;

int main (void)
{
	int month;

	cout<<"Input the number of month:";
	cin>>month;


	if (month==3||4||5)
	{
		cout<<month<<" is Spring."<<endl;
	}
	else if (month==6||7||8)
	{
		cout<<month<<" is Summer."<<endl;
	}
	else if (month==9||10||11)
	{
		cout<<month<<" is Autumn."<<endl;
	}
	else if (month==12||1||2)
	{
		cout<<month<<" is Winter."<<endl;
	}
	else
	{
		cout<<"Do not exit."<<endl;
	}

	/*
	if (month==1)
	{
		cout<<month<<" is January."<<endl;
	}
	else if (month==2)
	{
		cout<<month<<" is February."<<endl;
	}
	else if (month==3)
	{
		cout<<month<<" is March."<<endl;
	}
	else if (month==4)
	{
		cout<<month<<" is April."<<endl;
	}
	else if (month==5)
	{
		cout<<month<<" is May."<<endl;
	}
	else if (month==6)
	{
		cout<<month<<" is June."<<endl;
	}
	else if (month==7)
	{
		cout<<month<<" is July."<<endl;
	}
	else if (month==8)
	{
		cout<<month<<" is August."<<endl;
	}
	else if (month==9)
	{
		cout<<month<<" is September."<<endl;
	}
	else if (month==10)
	{
		cout<<month<<" is October."<<endl;
	}
	else if (month==11)
	{
		cout<<month<<" is November."<<endl;
	}
	else if (month==12)
	{
		cout<<month<<" is December."<<endl;
	}
	else
	{
		cout<<"Do not exit."<<endl;
	}
	*/

	//system("pause")
	return 0;
		
}