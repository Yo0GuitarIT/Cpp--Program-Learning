#include<iostream>
#include<cstdlib>
using namespace std;

int find_max(int []);
int find_min(int []);
int max_min(int []);

int main (void)
{
	int a[5]={79,13,45,73,22};
	cout << "a[]=";
	for(int i ; i<5 ;i++)
		cout << a[i] << " ";
	
	cout <<endl;
	
	cout <<"Max is " << find_max(a)<<endl;
	cout <<"Min is " << find_min(a)<<endl;
	cout <<"Max-Min " << max_min(a)<<endl;
	return 0;
}

int find_max(int a[])
{	
	int max=a[0];
	for(int i=0; i<5 ; i++)
	{
		if(max<a[i])
			max = a[i];
	}	
	return max;
}

int find_min(int a[])
{	
	int min=a[0];
	for(int i=0; i<5 ; i++)
	{
		if(min>a[i])
			min = a[i];
	}		
	return min;
}

int max_min(int a[])
{	
	int max=a[0];
	int min=a[0];
	
	for(int i=0; i<5 ; i++)
	{
		if(max<a[i])
			max = a[i];
	}	
	
	for(int i=0; i<5 ; i++)
	{
		if(min>a[i])
			min = a[i];
	}
	return max-min;
}
