#include<stdio.h>
#include<iostream>

using namespace std;

int principle(int a)
{
 cout<<"\nEnter the principle:-Rs ";
 cin>>a;
 return a;
}         

int rate(int a)
{
//	int num;
	cout<<"\nEnter the rate:-";
	cin>>a;
	return a;
}       

float time(float a)
{
	cout<<"\nEnter the time in years:-";
	cin>>a;
	return a;
	
}

int main()
{
	int amount,p,r,i,num,ch;
	float num1,t;
	do{
		
	
	cout<<"\nDo you want to run the program?(Enter 1 to run/Enter 2 to exit)";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
			
	p=principle(num);
	r=rate(num);
	t=time(num1);
	i=(p*r*t)/100;
	amount=p+i;
	cout<<"\nAmount before simple interest:-Rs "<<p<<"\n";
	cout<<"\nAmount after simple interest:-Rs "<<amount<<"\n";
break;
}

case 2:
	{
		exit(0);
	}
}
}while(1);
	return 0;
}

