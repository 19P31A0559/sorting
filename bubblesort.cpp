#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,s=0;
	cout<<"Enter the array size: ";
	cin>>num;
	cout<<"Enter the array elements:\n";
	int a[num];
	for(int i=0;i<num;i++)
		cin>>a[i];
	//bubble sort logic
	for(int i=0;i<num-1;i++)// for n elements, n-1 passes needed to sort the array
	{
		//optimization1-after ith pass, the i elements can be ignored at the last since the bigger elements of that pass are placed at last
		for(int j=0;j<num-i-1;j++)
		{
			if(a[j]>a[j+1])//swapping will occurs based on this condition
			{
				swap(a[j],a[j+1]);
				s=1;
			}
		}
		//optimization2-if the elements are in sorted order,the swap will not takes place.
		if(s==0)
			break;
	}
	for(int i=0;i<num;i++)
		cout<<a[i]<<" ";
	return 0;
}
