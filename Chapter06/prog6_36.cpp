#include<iostream>
#include<cstdlib>
using namespace std;

float power(float,int);
float fact(int);


int main(void)
{
	float sum = 0.0f;
	double x =0.1f;

	for(int i=0;i<=10;i++)
		sum += power(x,i)/fact(i);


	cout<<sum<<endl;
	
	//system("pause")
	return 0;
}


float power(float x,int n) //x^n
{		
	if (n>=1)
	{
		return x*power(x,n-1);
	}
	else
		return 1;
}

float fact(int n) //x!
{	
	if (n>1)
		return n*fact(n-1);
	else
		return 1;	
}