#include<iostream>
#include<cstdlib>
using namespace std;
int setvalue(int &,int &);

int main (void)
{
    int a,b;
    cout << "Inter two integer a & b" <<endl;
    cout << "a : ";
    cin >> a ;
    cout << "b : ";
    cin >> b;
   
    setvalue(a,b);
    
    cout << "a ===>" << a << endl;
    cout << "b ===>" << b << endl;
    system("pause");
    return 0;
}

int setvalue(int &x,int &y)
{
	if(x>y)
	{
		x=100;
		y=10;
	}
	if(y>x)
	{
		y=100;
		x=10;
		}
	
	return x,y;	
}