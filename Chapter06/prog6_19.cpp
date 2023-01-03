#include <iostream>
#include <cstdlib>
using namespace std;

int cub(int);

int main(void)
{	
	int a;
	cout<<"Input an integer X:";
	cin>>a;
	cout<<"X^3="<<cub(a)<<endl;
	
	//system("pause");
	return 0;
}

int cub(int x)
{
	int	xxx;
	xxx =x*x*x;
	return xxx;
}