#include<iostream>
#include<cstdlib>
using namespace std;

#define max(x,y) ((x)>(y) ? (x) : (y))

/*
	if x>y
		return x;
	else 
		return y;
*/

int main (void)
{
	cout<<"max(12,6)="<<max(12,6)<<endl;
    cout<<"max(3.6,9.7)="<<max(3.6,9.7)<<endl;
	
	system ("pause");
	return 0;
}