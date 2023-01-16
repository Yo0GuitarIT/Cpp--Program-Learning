#include<iostream>
#include<cstdlib>
using namespace std;

int Find(int [3][2]);

int main(void)
{
	int a[3][2]={{14,67},{42,64},{23,98}};
	
	cout << "a[]=" << endl;
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	Find(a);
		
	return 0;
}

int Find(int a[3][2])
{	
	int max = a[0][0];
	int min = a[0][0];
	
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			if(max<a[i][j])
				max = a[i][j];
				
			if(min>a[i][j])
				min =a[i][j];
		}
	}
	
	cout << "Max is " << max <<endl;
	cout << "Min is " << min <<endl;
	
	return 0;
}
