#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[],int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
	{
		int min_ind=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]<a[min_ind])
			{
				min_ind=j;
			}
		}
		temp[i]=a[min_ind];
		a[min_ind]=INT_MAX;
	}
	for(int i=0;i<n;i++)cout<<temp[i]<<" ";	
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	SelectionSort(a,n);
}
