#include<iostream>
using namespace std;
int main()
{
	int sum=0,num=0,value=1;
	float average;
	while(value!=9999)
	{
		cout<<"Enter an integer & Exit 9999:";
	cin>>value;
	if(value==9999)
	{
		break;
	}
	else
	{
		sum=sum+value;
		value++;
		num++;
	}
	}
	average=sum/num;
	cout<<"sum is ="<<sum;
	cout<<"\naverage is ="<<average;
}
