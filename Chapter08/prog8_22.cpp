#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int A[]={66,45,34,90,87};
    int i,min=A[0],max=A[0];
    int length = sizeof(A)/sizeof(int);
    int mina=0,maxa=0;
    
    cout << "Elements in array A are ";
    for (i=0; i<length; i++)
    {
        cout << A[i] << " ";
        if(A[i]>max)
        {
        	max=A[i];
        	maxa=i;
    	}
        if(A[i]<min)
        {
			min=A[i];
    		mina=i;
    	}
	}
    cout << endl;
    
    
    cout << "Max is A[" << maxa <<"]" <<endl;
    cout << "Max is " << max <<endl<<endl;
    
    cout << "Min is A[" << mina <<"]" <<endl;
    cout << "Min is " << min <<endl<<endl;
    
    cout << "Max + Min is " << max + min <<endl;
    cout << "Max - Min is " << max - min <<endl;
    

    system("pause");
    return 0;
}