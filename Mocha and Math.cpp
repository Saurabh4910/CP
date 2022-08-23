#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
        int n;
        char s[n];
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
        }
        for(int j=0;j<n;j++)
        {
            if(j==0 && s[0]=='?')
            {
                if(s[j+1]=='R')
                {
                    s[j]='B';
                }
                if(s[j+1]=='B')
                {
                    s[j]='R';
                }
                if(s[j+1]=='?')
                {
                    s[j]='B';
                }
            }
            if(s[j]=='?'&& j!=0)
            {
                if(s[j-1]=='R')
                {
                    s[j]='B';
                }
                if(s[j-1]=='B')
                {
                    s[j]='R';
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            cout<<s[j];
        }
        cout<<endl;
}