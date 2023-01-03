#include<iostream>
#include<iostream>
using namespace std;

void sum(int &,int &);

int main (void)
{
    int a,b;

    cout << "Input integer number a :";
    cin >> a;
    cout << "Input integer number b :";
    cin >> b;
    
	cout << a << " + "<< b << " = " ;
	
	sum(a,b);
	cout<< a <<endl; 
  
    system("pause");
    return 0;
}

void sum(int &i ,int &j)
{
	i=i+j;
	return;  
   
}