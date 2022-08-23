#include <bits/stdc++.h>
using namespace std;

void fall1(int arr[],int start,int end){
	long sum=0;
	for(int i=start-1;i<end-1;i++){
		if(arr[i+1]<arr[i]) sum+=arr[i]-arr[i+1];
	}
	cout<<sum<<endl;
}

void fall2(int arr[],int start,int end){
	long sum=0;
	for(int i=start-1;i>=end;i--){
		
		if(arr[i-1]<arr[i]) sum+=arr[i]-arr[i-1];

	}
	cout<<sum<<endl;
}

int main(){

	// freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    for(int i=0;i<m;i++){
    	int s,t;
    	cin>>s>>t;
    	if(s<t) fall1(arr,s,t);
    	else if(s>t) fall2(arr,s,t);
    }
}