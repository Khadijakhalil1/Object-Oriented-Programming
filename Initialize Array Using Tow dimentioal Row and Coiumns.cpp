#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[2][3]={33,44,55,66,77,88};
	for(i=0;i<2;i++)
	{ 
	for(j=0;j<3;j++)
	cout<<"arr["<<i<<"]["<<j<<"] =  "<<arr[i][j];
	cout<<endl;
}
}
