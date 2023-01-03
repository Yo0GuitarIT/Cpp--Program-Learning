#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	char ch = 'A';
	short s = 38;
	float f =10.4f;
	int i =12;
	double d =8.4;
	
	double A = ch*(f-s)+(i/d);
	double B = d-s*(i+f)-ch;
	float C = (i+s)/f+ch*(s-ch);
	short D = 5-(ch+s)/4;
	
	cout <<"ch*(f-s)+(i/d) = "<<A<< endl;
	cout <<"d-s*(i+f)-ch = "<<B<< endl;
	cout <<"i+s)/f+ch*(s-ch) = "<<C<< endl;
	cout <<"5-(ch+s)/4 = "  <<D<<endl;
	
	system("pause");
	return 0;
}
