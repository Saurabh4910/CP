#include<bits/stdc++.h>
using namespace std;

inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main()
{
	debugMode();
	int M,N;
	cin>>M>>N;
	int aerial[M][N];
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>aerial[i][j];
		}
	}
	for(int i=0;i<M;i++)
	{
		for(int j=.;j<N;j++)
		{
			if(aerial[i][j]==1)
			{
				cout<<0<<" ";
			}
			else
			{
				
			}
		}
	}
}