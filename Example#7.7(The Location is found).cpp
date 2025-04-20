#include<iostream>
using namespace std;
int main()
{
	int num,n,i,position;
	int loc=-1;
	int arr[5];
	cout<<"enter size(Range)";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Enter  numbers :";
	cin>>arr[i];
}
cout<<"enter a num to find :";
cin>>num;
	for(i=0;i<n;i++)
	{
		if(arr[i]=num)
		{
		loc=1;
		position=i+1;
		break;
	}
}
	if(loc==-1)
	{
	cout<<"opps! sorry the number is not found";
     }
	else
	{
	cout<<"\nHurry the number is found :  "<<position;
}
}
