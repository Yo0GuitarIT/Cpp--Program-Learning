#include<iostream>
#include<cstdlib>
using namespace std;

void proverb(void);
void proverb(int);

int main(void)
{   
	int k;
	cout <<"Input an Integer K :";
	cin >> k;
	
    cout << "proverb() = " ;
    proverb();
    cout << "proverb("<< k <<") = " ;
    proverb(k);

    system ("pause");
    return 0;
}

void proverb(void)
{
	cout << "Two hands are better than one."<<endl;
	return;
}
void proverb(int a)
{
	cout <<a;
	return;
}
