#include<bits/stdc++.h>
using namespace std;

void minimumBribes(int q[],int n)
{
	int bribe=0;
	for(int i=0;i<n;i++)
	{
		if(q[i]-1-i>0)
		{
			if(q[i]-1-i >2)
			{
			    cout<<"Too chaotic"<<endl;
			    return;	
			}
			bribe+=q[i]-1-i;
		}
	}
    cout<<bribe<<endl;
}
int main()
{
	// debugMode();
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		minimumBribes(arr,n);
	}
}