#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int k=a[i],j=i-1;
		while(j>=0&&k<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	for(int i=0;i<n;i++)cout<<a[i]<<" ";	
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	InsertionSort(a,n);
}
