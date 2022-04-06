#include<iostream>
#include<string>

using namespace std;
	int maximum(int [],int );
	string swap(string ,int,int);
	int countStr(string);

string swap(string s,int a,int b)
{
	string temp;
	temp[0]=s[a];
	s[a]=s[b];
	s[b]=temp[0];
	return s;
}

int countStr(string c)
{
	int l;
	int count=0;
	l=c.length();
	for(int i=1;i<l;i++)
	{
	if(c[i-1]=='0' && c[i]=='1')
		{
			count=count+1;
		}
	}
	return count;
}

int maximum(int a[],int l)
{
	int j=0;
	for(int i=0;i<l;i++)
	{
		if(a[i]>j)
		{
			j=a[i];
		}
	}
	return j;
}

int main()
{
	string s;
	cout<<"Enter Binary String: \n";
	cin>>s;
	int l=s.length();
	int a,b,count=0;
	string sw;
	int r[300];
	for(int i=0;i<l;i++)
	{
		for(int j=i;j<l;j=j+2)
		{
			sw=swap(s,i,j);
			r[count]=countStr(sw); 
			count++;
		}
	}

	cout<<"Answer: "<<maximum(r,count)<<endl;
	return 0;
}
