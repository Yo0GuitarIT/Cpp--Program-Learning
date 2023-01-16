#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int array[2][5]={{35,67,45,14,98},
				 {65,87,41,83,60}};
	int min=100;
	
	cout<<"Array[2][5] is "<<endl;
	for(int i=0 ;i<2 ; i++)
	{
		for(int j=0 ; j<5 ;j++)
		{
			cout<< array[i][j] <<" ";
			
			if(min>array[i][j])
				min = array[i][j];
		}
		cout <<endl;
	}
	
	cout << "Min is " <<min <<endl;
	
	return 0;
}