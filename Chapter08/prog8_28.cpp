#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int array[2][2][2]=
					{{{35,67},
					  {30,78}},
					  
					 {{86,94},
					  {59,17}}};
	int sum=0;
	
	cout<<"Array[2][2][2] is "<<endl;
	for(int i=0 ;i<2 ; i++)
	{
		for(int j=0 ; j<2 ;j++)
		{
			for(int k=0 ; k<2 ;k++)
			{
				cout<< array[i][j][k] <<" ";
				
				sum += array[i][j][k];	
			}
			cout <<endl;
		}
		cout <<endl;
	}
	
	cout<< "Toatl is "<< sum  <<endl;
	
	return 0;
}