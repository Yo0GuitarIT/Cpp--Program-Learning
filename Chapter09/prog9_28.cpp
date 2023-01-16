#include<iostream>
#include<cstdlib>
using namespace std;
void converter(float *);

int main(void)
{
	float a = 0.0;
    cout << "Input liquid capacity (liter):";
    cin >> a;
	converter(&a);
	cout << "It's " << a << " gallon." <<endl; 
    return 0;
}

void converter(float *a)
{
	*a=*a*0.264;
	return;
}
