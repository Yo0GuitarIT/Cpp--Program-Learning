#include<iostream>
#include<cstdlib>
using namespace std;

#define pi  3.1415926
#define volumn(r) (4/3)*(pi)*(r)*(r)*(r)

int main (void)
{
	cout <<"volumn(1)="<< volumn(1) <<endl;
	cout <<"volumn(2)="<< volumn(2) <<endl;
	cout <<"volumn(3)="<< volumn(3) <<endl;
	cout <<"volumn(4)="<< volumn(4) <<endl;
	cout <<"volumn(5)="<< volumn(5) <<endl;
	
	system ("pause");
	return 0;
}