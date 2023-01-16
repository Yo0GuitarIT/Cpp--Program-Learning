#include<iostream>
#include<cstdlib>
using namespace std;
#define Max 5

int main(void)
{
	double A[Max];
	float sum = 0.0f;
	
	cout <<"Input number:" <<endl;
	
	for(int i=0 ; i<5 ;i++)
	{
		cout <<"Input number " << i+1 << " is " ;
		cin >> A[i];
	}
	
	for(int i=0 ; i<5 ;i++)
		sum +=A[i];
	
	cout << "Average is " << sum/5 <<endl;
	
	
	system("pause");
	return 0;
}