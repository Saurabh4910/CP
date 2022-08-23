#include<bits/stdc++.h>
using namespace std;

long long int c=0;
int ans=0;

void f(long long int n,long long int l,long long int r){

	if(c>r) return;

	if(n<=1){
		c++;
		if(c>=l && c<=r && n==1) ans++;
		return;
	}
	
	f(n/2,l,r);
	
	f(n%2,l,r);
	
	f(n/2,l,r);
}

int main(){

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long int n,l,r;
    cin>>n>>l>>r;
    f(n,l,r);
    cout<<ans;
}