#include<iostream>
using namespace std;
int main()
{
	int num1=0,num2=0,num3=0,num4=0,a,b=1;
	cout<<"Enter number as your choice:\n1. Lecture\n2. Quiz\n3. Duration\n4. Test";
	while(b<=7)
	{
		cout<<"\nEnter your choice;";
		cin>>a;
		if(a==1)
	   	num1++;
	  else if(a==2)
	   num2++;
		else if(a==3)
	   	num3++;
	   else	if(a==4)
	   	num4++;
	  else
	  	cout<<"ivalid number:\n";
	  	b++;
	}
	
    cout<<"\n The option 1 is selected  :  "<<num1<<"Times";
    cout<<"\n The option 2 is selected  :  "<<num2<<"Times";
    cout<<"\n The option 3 is selected  :  "<<num3<<"Times";
    cout<<"\n The option 4 is selected  :  "<<num4<<"Times";
    return 0;
}
