#include<iostream>
#include<cstdlib>
using namespace std;

int find_min(int [2][3]);

int main(void)
{
	int A[2][3]={{3,4,6},{4,7,1}};
	
	cout << "A[]=" << endl;
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	cout << "Min is " << find_min(A) <<endl;
	
	return 0;
}

int find_min(int A[2][3])
{
	int min = A[0][0];
	
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			if(A[i][j]<min)
				min=A[i][j];
		}
	}
	return min;
}