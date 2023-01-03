#include<iostream>
#include<iostream>
using namespace std;

void gcb(int &,int &,int &);

int main (void)
{
    int x=21,y=49,g;
    
    
    gcb(x,y,g);
    
    
    cout<<"The GCB of "<< x <<" & "<< y <<" is ";
    cout<< g <<endl;

    system("pause");
    return 0;
}

void gcb(int &a,int &b,int &g)
{
    while(b!=0)
    {
        g=a%b;
        cout << a <<"   "<< b <<"   "<<g<<endl;
        a=b;

        b=g;

    }
    g=a;
}