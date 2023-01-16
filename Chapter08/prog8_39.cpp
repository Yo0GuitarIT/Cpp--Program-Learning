#include<iostream>
#include<cstdlib>
using namespace std;

char reverse(char a[]);

int main(void)
{
	char ch[5];

	cout << "Enter  a string:" ;
	cin.getline(ch,5);
	cout << ch <<endl; 
	
	
	reverse(ch);
    
	cout << ch <<endl;  
	
	system("pause");
	return 0;
}

char reverse(char a[5])
{	
	char b[5];
	for(int i=0;i<4;i++)
		b[3-i]=a[i];
	
	for(int i=0;i<5;i++)
		a[i]=b[i];
		
	return a[5];
}