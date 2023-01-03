#include <iostream>
#include <cstdlib>

using namespace std;
void star(void);

int main(void)
{
	star();
	cout<<"6*6="<<6*6<<endl;
	star();
	//system("pause");
	return 0;
}

void star(void)
{
 for (int i = 0; i <=8; i++)
 	cout<<"*";
 cout<<endl;
 return ;
}