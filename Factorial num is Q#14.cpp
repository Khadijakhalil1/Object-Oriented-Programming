#include<iostream>
using namespace std;
int main()
{
	int num,c,f,n;
	do
	{	
	f=1;
	c=f=1;
	cout<<"Enter an number:";
	cin>>n;
	while(c<=n)
	{
		f=f*c;
		c++;
	}
	cout<<"\nfactorial num is:"<<f;
	cout<<"\nif you enter 1 then you can again calculate\n factorial otherwise program terminate:";
	cin>>num;
}
while(num==1);
}
