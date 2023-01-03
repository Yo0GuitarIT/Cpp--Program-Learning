// 計算本利和
#include <iostream>
#include <cstdlib>

using namespace std;

float cal(float,int);

int main(void)
{	
	int n;
	float p,r;
	double t = 0.0f;

	cout<<"Input your Principal p:";
	cin>>p;
	cout<<"Input your Monthly interest rate r:";
	cin>>r;
	cout<<"Input your Number of deposit periods n:";
	cin>>n;
	t = p * cal(r,n);

	cout<<"Total is "<<t<<endl;
	//system("pause");
	return 0;
}

float cal(float r,int n)
{
	while(n>1)
		return (1+r)*cal(r,n-1);
	return 1+r;
}