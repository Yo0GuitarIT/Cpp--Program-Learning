#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{	
	int total,sum=0;
	int PDT[5]={12,16,10,14,15}; //A=12 B=16 C=10 D=14 E=15
	int sales[3][5]={{33,32,56,45,33},
					 {77,33,68,45,23},
					 {43,55,43,67,65}};
	int saler[3];
	int Psale[5];
	int max=0,s=0;
	int Pmax=0, Ps=0;
	
	cout << "1.Calculate Each Saler Total" << endl;				 
	for(int i=0;i<3;i++) 
	{				 
		cout << "Num" << i+1 <<" total sale is "; 				 
		
		for(int j=0 ;j<5; j++)
		{
			total = PDT[j]*sales[i][j];	
			sum +=total;
					
		}
			
		saler[i]=sum;
		if(saler[i]>max)
			{
				max = saler[i];
				s=i;
			}
		cout <<sum << endl;
		sum=0;	
	}
	
	cout << endl;
	
	////////////////////////////////////////////////////////
	
	cout << "2.Each Product Total" << endl;
	
	for(int j =0 ;j<5; j++)
	{
		sum=0;
		cout << "Product " << j <<":";
		for(int i =0 ;i<3; i++)
		{
			total = PDT[j]*sales[i][j];
			sum +=total;
		}	
		cout <<sum << endl;	
		
		Psale[j]=sum;
		if(Pmax<Psale[j])
			{
				Pmax=Psale[j];
			    Ps=j;
			}
	}
	cout << endl;
	
	//////////////////////////////////////////////////////////
	
	cout << "The most sale is num "<< s <<endl;
	cout << "Total is "<< max <<endl;
	cout << endl;
	
	//////////////////////////////////////////////////////////
	
	cout << "The most sale Product "<< Ps <<endl;
	cout << "Total is "<< Pmax <<endl;
	cout << endl;
	
	
	system("pause");
	return 0;
}