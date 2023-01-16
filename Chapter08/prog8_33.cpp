#include<iostream>
#include<cstdlib>
using namespace std;

int count(int []);

int main(void)
{
	int a[8]={14,67,42,64,23,98,22,56};
	
	cout << "a[8]=";
	for(int i=0 ; i<8 ; i++)
	 cout << a[i] << " " ;
	
	cout <<endl;
	
	count(a);
	
	return 0;
}

int count(int a[])
{
	int even=0,odd=0;
	for(int i=0 ; i<8 ; i++)
	{
		if(a[i]%2 == 0)
			even++;
		else
		 odd++;
	}
	 
	cout << even <<" is even." <<endl;
	cout << odd <<" is odd." <<endl;
	return 0;
}
