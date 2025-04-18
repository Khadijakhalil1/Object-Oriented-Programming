#include<iostream>
using namespace std;
int main()
{
	int age[100],i,count;
	count=0;
	for(i=0;i<5;i++)
	{
		cout<<"Enter Age Of Your Family Member:";
		cin>>age[i];
		if(age[i]>=50 && age[i]<=60)
		count=count+1;
	}
		cout<<"Three Is  "<<count<<"  Family Member in Range Of 50 To 60"; 
}
