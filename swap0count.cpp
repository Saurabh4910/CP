#include<bits/stdc++.h>
using namespace std;

int CountSwap(int arr[],int n)
{
	int j=n-1;
	for(int i=0;i<j;i++)
	{
		if(arr[i]==0)
		{
			if(arr[j]!=0)
			{
				arr[i]=arr[j];
				arr[j]=0;
				j--;
			}
		}
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin>>n;
    for(int i=0;i<t;i++)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int j=0;j<n;j++)
    	{
    		cin>>arr[j];
    	}
    	cout<<CountSwap(arr,n)<<endl;
    }
}