#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	char ch = 'A';
	short s = 12;
	float f =12.4f;
	int i =15;
	double d =13.62;
	
	float a = s+(f/s)+(ch*i);
	double b =ch + d/(s-i)*f;
	double c = (s+d)/ch*(d+i);
	
	cout <<"s+(f/s)+(ch*i) = "<<a<< endl;
	cout <<"ch + d/(s-i)*f = "<<b<< endl;
	cout <<"(s+d)/ch*(d+i) = "<<c<< endl;
	
	system("pause");
	return 0;
}
