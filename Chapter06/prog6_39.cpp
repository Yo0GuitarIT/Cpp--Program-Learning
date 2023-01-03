#include<iostream>
#include<cstdlib>
using namespace std;

float fact(int);

int main(void)
{
	int i=1,sum=0,n=10;

	do
	{
		sum+=fact(i);
		i++;
	}while(i<=10);
	
	
	cout<<"1!+2!+...+"<<n<<"!="<<sum<<endl;
	//system("pause");
	return 0;
}

float fact(int n) //x!
{	
	if (n>1)
		return n*fact(n-1);
	else
		return 1;	
}