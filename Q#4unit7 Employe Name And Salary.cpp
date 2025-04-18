#include<iostream>
using namespace std;
int main()
{
	int a,name[10],salary[10];
	for(int s=0;s<10;s++)
	{
		cout<<"Enter Nme Of Employs : ";
		cin>>name[s];
		cout<<"Enter Employ Salary : ";
		cin>>salary[s];
	}
	for(int m=0;m<10;m++)
	{
	if(salary[m]>250000)
	{
		cout<<"paid Tax  ; ";
	}
	else
	{
		cout<<"Not Pid Tax : ";
	}
}
}
