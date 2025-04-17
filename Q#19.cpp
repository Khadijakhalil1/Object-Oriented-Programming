#include<iostream>
using namespace std;
int main()
{
	int f,c,n,sum=0;
	for(c=1;c<=5;c++)
	{
		f=1;
for(n=1;n<=c;n++)
    {
		f=f*n;
			sum=sum+f;
	}
}
	cout<<"sum"<<sum;
}

