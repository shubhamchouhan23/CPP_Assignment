#include<iostream>
using namespace std;
int gcd(int ,int);



int main()
{
	int length,breadth;
	int min;
	int r;
	cout<<"enter length and breadth\n";
	cin>>length;
	cin>>breadth;
	min=gcd(length,breadth);
	r=(length/min) * (breadth/min);
	cout<<"answer= "<<r<<endl;
	return 0;
}

int gcd(int l,int b)
{
	if(l==0 || b==0){
	return 0;
}

if(l==b)
	{
	return l;
	}
	
	if(l>b)
	{
	return gcd(l-b,b);
	}
	return gcd(l,b-l);
}
