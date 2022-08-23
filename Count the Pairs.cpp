#include<bits/stdc++.h>
using namespace std;

bool diff(int a,int b,int k)
{
	if(abs(a-b) ==k)
	{
		return true;
	}
	return false;
}

int main()
{
	// freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);

    int n;int k; int count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		if(arr[i]==arr[j])
    		{
    			cout<<"0";
                return 0 ;
    		}
    		else
    		{
    			if(diff(arr[i],arr[j],k)==true )
    			{
    				count+=1;
    			}
    		}
    	}
    }
    cout<<count;
}