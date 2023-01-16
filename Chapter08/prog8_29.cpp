#include<iostream>
#include<cstdlib>
using namespace std;

int main(void){
    int a[3][3]={{3,2,1},{5,6,7},{2,4,6}};
    int b[3][2]{{2,3},{3,4},{6,2}};
    int c[3][2];
    int sum =0;
    
    cout << "a[][]=" <<endl;
    for(int i=0; i<3 ; i++)
	{
		for(int j=0; j<3 ; j++)
		{
			cout << a[i][j] <<" ";	
		}
		cout << endl;	
	}
	cout << endl;
	
	cout << "b[][]=" <<endl;
    for(int i=0; i<3 ; i++)
	{
		for(int j=0; j<2 ; j++)
		{
			cout << b[i][j] <<" ";	
		}
		cout << endl;	
	}
    cout << endl;
    
    cout << "c[][]=" <<endl;
    for(int k=0 ; k<3 ;k++)
	{
		for(int i=0;i<2 ;i++)
		{   
			for(int j=0; j<3 ; j++)
			{
				sum+=a[k][j]*b[j][i];
				c[k][i]=sum;	
			}
			cout <<c[k][i] << " ";
			sum =0;
		}
		cout << endl;	
	}
	
    return 0;
}