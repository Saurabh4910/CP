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
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int left,right;
		for(int j=0;j<n;j++)
		{
		cout<<"(";
		left=1;right=0;
		while(left+right!=2*n)
		{
			int rad=rand()+rand();
			if(rad%2==0 && left<=n-1)
			{
				cout<<"(";
				left++;
			}
			else if(rad%2==1 && right<=n && left>right)
			{
				cout<<")";
				right++;
			}
		}
		cout<<endl;
	    }
	}
}