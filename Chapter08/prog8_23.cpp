#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void)
{
	int i;
    int A[]={1,3,5,7,9};
    int B[]={2,4,6,8,10};
    int C[]={0,0,0,0,0,0,0,0,0,0};
    int lengthA = sizeof(A)/sizeof(int);
    int lengthB = sizeof(B)/sizeof(int);
   
    
    
    cout << "Elements in array A are ";
	for (int i=0; i<lengthA; i++)
        cout << A[i] << " ";
	cout << endl;
	
	cout << "Elements in array B are ";
	for (int i=0; i<lengthB; i++)
        cout << B[i] << " ";
	cout << endl;
	
	cout << "Elements in array C are ";
	for (int i=0; i<10; i++)
    {
    	if(i<5)
    		C[i]=A[i];
    	else
    		C[i]=B[i-5];
		cout << C[i] <<" ";
	}    
	cout << endl <<endl;
	
	sort(C,C + 6);
	
	
	
	cout << "C[]=";
	for (int i = 0; i < 10; i++) 
	    cout << C[i] << " ";
	    
	cout << endl;

    system("pause");
    return 0;
}