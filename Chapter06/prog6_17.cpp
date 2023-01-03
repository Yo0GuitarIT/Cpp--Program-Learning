#include <iostream>
#include <cstdlib>
using namespace std;
void proverb(int);
int main(void)
{	
	int k = 7;
	proverb(k);
	//system("pause");
	return 0;
}

void proverb(int k)
{
	for (int i=1; i<=k ; i++)
		cout<<"Live and Lrean."<<endl;
	return;
}