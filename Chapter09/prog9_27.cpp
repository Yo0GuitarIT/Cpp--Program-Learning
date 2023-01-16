#include<iostream>
#include<cstdlib>
using namespace std;
void converter(float *);

int main(void)
{
	float length = 0.0;
    cout << "Input length(cm):";
    cin >> length;
	converter(&length);
	cout << "It's " << length << "inch." <<endl; 
    return 0;
}

void converter(float *a)
{
	*a=*a*0.394;
	return;
}

