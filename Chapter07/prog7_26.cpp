#include<iostream>
#include<cstdlib>
using namespace std;

double min(double,double);
double min(double,double,double);

int main(void)
{
    cout << "min(9.14 , 18.787)=" << min(9.14 , 18.787) <<endl;
    cout << "min(9.14 , 18.787 , 6.333)=" << min(9.14 , 18.787 , 6.333) <<endl;

    system ("pause");
    return 0;
}

double min(double a,double b)
{
    if(a<b)
        return a;
    else
        return b;
}

double min(double a,double b,double c)
{
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
        return b;
    else
        return c;
}