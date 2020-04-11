#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp,a[30];
	cout<<"enter the number of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			else
			{
				break;
			}
		}
	}
	cout<<"array after insertion sorting is";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
}
