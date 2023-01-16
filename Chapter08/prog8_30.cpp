#include<iostream>
#include<cstdlib>
using namespace std;

int find_max(int []);


int main (void)
{
	int a[6]={30,45,67,24,19,88};
	cout << "A[]=";
	for(int i ; i<6 ;i++)
		cout << a[i] << " ";
	
	cout <<endl;
	
	cout <<"Find the max number is " << find_max(a) <<endl;
	
	return 0;
}

int find_max(int a[])
{	
	int max=a[0];
	for(int i=0; i<6 ; i++)
	{
		if(max<a[i])
			max = a[i];
	}
	
	return max;
}