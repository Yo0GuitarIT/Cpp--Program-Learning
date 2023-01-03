#include<iostream>
#include<iostream>
using namespace std;
void sort(int &,int &);

int main (void)
{
    int a,b;
    cout << "Input integer number a :";
    cin >> a;
    cout << "Input integer number b :";
    cin >> b;
	
	sort(a,b); 
  
    system("pause");
    return 0;
}

void sort(int &i ,int &j)
{
	if(i>j)
        cout << i << " ======> " << j <<endl;
    else if(j>i)
        cout << j << " ======> " << i <<endl;
    else
        cout << " Input Again" <<endl;
   
}
