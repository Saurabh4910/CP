#include <bits/stdc++.h>
using namespace std;
void prin(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		a[i]+=0;
		cout<<a[i];
	}
	cout<<"hello";
}

int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    cout<<a[2];
}
