#include<iostream>
#include<cstdlib>
using namespace std;

int max(int & ,int &);

int main (void)
{
    int a,b;
    cout << "Inter two Integer :" <<endl;
    cin >> a ;
    cout << "Another : " <<endl;
    cin >> b;

    cout << max(a,b) << " is bidgger." << endl;

    system("pause");
    return 0;
}

int max(int &i,int &j)
{
    if(i>j)
        return i;
    else if(i<j)
        return j;
}
