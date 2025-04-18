#include<iostream>
using namespace std;
int main()
{
	int arr[5],max,i,j;
	for(i=1;i<=5;i++)
	{
		cout<<"Enter An Number:";
		cin>>arr[i];
	}
	max=0;
	for(j=1;j<=5;j++)
	if(arr[j]>max)
	    {
		max=arr[j];
    	}
	cout<<"Maximum Number Is"<<max;
}

