#include<bits/stdc++.h>
using namespace std;

inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main(){
	debugMode();
	int n;
	cin>>n;
	float aug[n][n+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cin>>aug[i][j];cout<<aug[i][j]<<" ";
		}
	}
}