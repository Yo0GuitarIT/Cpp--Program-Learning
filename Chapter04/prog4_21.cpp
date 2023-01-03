//計算圓形面積

#include<cstdlib>
#include<iostream>

using namespace std;

int main (void)
{
	int r;
	double PI = 3.14159f;
	double circle;

	cout<<"Input radius==>";
	cin>>r;
	
	circle = r*r*PI;

	cout<<"The Circle Area is "<<circle<<endl;
	 
	//system("pause")
	return 0; 

}