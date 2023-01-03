#include<iostream>
#include<cstdlib>
using namespace std;

int max(int,int);
int max(int,int,int);

int main(void)
{
    cout << "max(3,8)=" << max(3,8) <<endl;
    cout << "max(3,8,14)=" << max(3,8,14) <<endl;

    system ("pause");
    return 0;
}

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int max(int a,int b ,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}