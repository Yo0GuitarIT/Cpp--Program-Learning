#include<iostream>
#include<cstdlib>
using namespace std;
void arrangement(int *,int *,int *);

int main(void)
{
    int a=39 , b=69 , c=54;
    arrangement(&a,&b,&c);

    return 0;
}

void arrangement(int *p1,int *p2,int *p3)
{
	int k[3]={*p1,*p2,*p3};
	int max,mid,min=10000;
	
	for(int i=0 ; i<3 ; i++)
	{
		if (max < k[i])
			max = k[i];
	}
	
	for(int i=0 ; i<3 ; i++)
	{
		if (min > k[i])
			min = k[i];
	}
	
	for(int i=0 ; i<3 ; i++)
	{
		if (k[i] != max && k[i] != min)
			mid = k[i];
	}
	cout << max << " > " << mid << " > " << min << endl;
    return;
}