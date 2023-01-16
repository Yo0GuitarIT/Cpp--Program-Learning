#include<iostream>
#include<cstdlib>
using namespace std;
#define Max 5

int main(void)
{
	int score[Max];
	int i=0,num;
	float sum =0.0f;
	
	cout << "====Enter '-1' to stop ====" <<endl;
	
	do
	{	
		if (i==Max)
		{
			cout << "Full!"<<endl;
			i++;	
			break;
		}
		
		cout << "score:" ;
		cin >> score[i];
	}while(score[i++]>-1);
	
	num = i-1;
	
	for(int i ;i<num ;i++)
		sum +=score[i];
	
	cout << "Average is " << sum/num << endl;
	
	system("pause");
	return 0;
}