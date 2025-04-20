#include<iostream>
using namespace std;
int main()
{
	int n,k,t,sum=0;
	cout<<"Enter num for perfect";
	cin>>n;
	while(t<=n)
	{
		sum=0;
		for(k=1;k<t;k++)
		{
		if(t%k==0)
		sum=sum+k;
    }
  if(sum==t)
		cout<<"\n num is perfect:"<<t;
	else
		cout<<"\n num is not perfect";
		t++;
	}
return 0;
}

