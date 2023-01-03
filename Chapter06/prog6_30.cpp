//	使用inline函數
// f(x)計算

#include<iostream>
#include<cstdlib>

using namespace std;

inline double f(double x)
{
	double a;
	a=(3*x*x*x)+(2*x)+1;
	return a;
}

int main(void)
{
	cout<<"Calculate 3*x^3 + 2*x + 1=:"<<endl<<endl;
	
	cout<<"f(0) = "<<f(0)<<endl;
	cout<<"f(0.4) = "<<f(0.4)<<endl;
	cout<<"f(0.8) = "<<f(0.8)<<endl;
	cout<<"f(1.2) = "<<f(1.2)<<endl;
	cout<<"f(1.6) = "<<f(1.6)<<endl;
	cout<<"f(2) = "<<f(2)<<endl;

	//system("pause");
	return 0;
}