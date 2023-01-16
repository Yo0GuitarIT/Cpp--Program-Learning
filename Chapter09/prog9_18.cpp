#include<iostream>
#include<cstdlib>
using namespace std;
void replace(int *,int,int);

int main(void)
{
	int a[5]={1,2,3,4,5};
	int i,num=100;
	
	cout << "Before replace,a[]=";
	for(i=0 ; i<5 ; i++)
		cout << a[i] << " "; 
	cout << endl;
	
	replace(a,4,num);
	
	cout << "After replace,a[]=";
	for(i=0 ; i<5 ; i++)
		cout << a[i] << " "; 
	cout << endl;
	
	return 0;
}

void replace(int *ptr,int n,int num)
{
	*(ptr+n-1)=num;
	return;
}

