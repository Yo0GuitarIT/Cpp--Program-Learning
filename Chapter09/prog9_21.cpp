#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	char *ptr[3]={"Tom","Lily" ,"James Lee"};
	for(int i =0 ; i<3 ;i++)
		cout << ptr[i] << endl;
			
	return 0;
}
