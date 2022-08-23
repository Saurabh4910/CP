#include<bits/stdc++.h>
using namespace std;
int arrayManipulation(int q[][3], int m,int n)
{
	int arr[n]={0};
	for(int i=0;i<m;i++)
	{
		for(int j=q[i][0]-1;j<q[i][1]-1;j++)
		{
			arr[j]+=q[i][2];
		}
	}
	sort(arr,arr+n,greater<int>());
	return arr[0];
}
int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int n,m;
	cin>>n>>m;
	int q[m][3];
	for(int i=0;i<m;i++)
	{
		cin>>q[i][0];
		cin>>q[i][1];
		cin>>q[i][2];
	}

	cout<<arrayManipulation(q,m,n);
}