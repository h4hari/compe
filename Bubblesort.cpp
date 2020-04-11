#include<iostream>
using namespace std;
int main()
{
   int i ,j, n , temp ,a[40];
   cout<<"Enter the number of elemets:";
   cin>>n;
    for(i=0;i<=n;i++)
    {
		cin>>a[i];
	}
	for (i=0;i<=n;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout<<"The resulting array after bubble sort is:";
	for(i=0;i<=n;i++)
    {
		cout<<a[i];
	}
}

