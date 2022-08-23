#include<bits/stdc++.h>
using namespace std;

void rotLeft(int a[],int d,int n)
{   
	int D=d%n; int na[n];
	if(D==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
	  for(int i=0; i<n ; i++)
	  {
		if(i<n-D)
		{
			na[i]=a[D+i];
		}
		else
		{
			na[i]=a[i+D-n];
		}
		
	  }
    }

}
int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; int a[n]; int d; 
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    rotLeft(a,d,n);
    return 0;
}