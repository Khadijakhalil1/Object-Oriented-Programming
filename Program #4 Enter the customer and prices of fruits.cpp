#include<iostream>
using namespace std;
int main()
{
	int a,b,c,mango[a],banana[a],orange[a],bill[a];
	cout<<"Enter the number of customer : ";
	cin>>a;
	for(b=0;b<a;b++)
	{
		bill[b]=0;
		cout<<"NO.of customer:"<<b+1<<endl;
		cout<<"Enter the Number of Mangoes";
		cin>>mango[b];
		bill[b]+=mango[b]*20;
		cout<<"Enter the Number of Orange";
		cin>>orange[b];
		bill[b]+=orange[b]*10;
		cout<<"Enter the Number of Banana";
		cin>>banana[b];
		bill[b]+=banana[b]*5;
	}
	cout<<"\n-----------------------------------------------------------------  \n";
	cout<<"Customer No\tMangoes\tOranges\tBananas\tTotal Bill"<<endl;
	cout<<"-------------------------------------------------------------------\n";
	for(c=0;c<a;c++)
	cout<<c+1<<"\t\t"<<mango[c]<<"\t"<<orange[c]<<"\t"<<banana[c]<<"\t"<<bill[c]<<endl;
}
