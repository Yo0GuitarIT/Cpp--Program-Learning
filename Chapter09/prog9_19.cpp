#include<iostream>
#include<cstdlib>
using namespace std;
int *maximum(int *);

int main(void)
{
	int a[5]={3,1,7,2,6};
	int i, *ptr;
	
	cout << "a[]=";
	for(i=0 ; i<5 ; i++)
		cout << a[i] << " "; 
	cout << endl;
	
	ptr=maximum(a);
	
	cout << "max is " << *ptr << endl;
	
	return 0;
}

int *maximum(int *arr)
{
	int i ,*max;
	max=arr;
	for(i=0 ; i<5 ;i++)
		if (*max < *(arr+i))
			max = arr+i;
	return max;
}