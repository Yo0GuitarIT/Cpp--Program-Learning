//  使用inline函數
//	華氏攝氏互換
#include<iostream>
#include<cstdlib>
using namespace std;

inline float centigrade(float F)
{
	return (5*F-160)/9;
}

int main (void)
{
	cout<<"-40F="<<centigrade(-40)<<"C"<<endl;
	cout<<"-30F="<<centigrade(-30)<<"C"<<endl;
	cout<<"-20F="<<centigrade(-20)<<"C"<<endl;
	cout<<"-10F="<<centigrade(-10)<<"C"<<endl;
	cout<<"  0F="<<centigrade(0)<<"C"<<endl;
	cout<<" 10F="<<centigrade(10)<<"C"<<endl;
	cout<<" 20F="<<centigrade(20)<<"C"<<endl;
	

	//system("pause")
	return 0;
}