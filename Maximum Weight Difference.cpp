#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	if(a<b) return true;
	return false;
}

int main(){
	// freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
    int T;
    cin>>T;
    while(T--){
    	int n,k;
    	cin>>n>>k;
    	int arr[n];
    	for(int i=0;i<n;i++) cin>>arr[i];
    	sort(arr,arr+n,cmp);

    	int chef=0,son=0;

 		for(int i=0;i<n;i++){
 			if(k<=n/2){
 				if(i<k) son+=arr[i];
 				else chef+=arr[i];
 			}
 			else {
 				if(i<n-k) son+=arr[i];
 				else chef+=arr[i];
 			}
 		}
 		cout<<abs(chef-son)<<endl;
    }
}