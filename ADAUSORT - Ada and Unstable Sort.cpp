#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2){
	if(p1.first<p2.first) return true;
	if(p1.first==p2.first){
		if(p1.second<p2.second) return false;
		else return true;
	}
	return false;
}

int main(){
	// freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    pair<int ,int> arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i].first;
    	arr[i].second=i;
    }
    sort(arr,arr+n,cmp);

    for(int i=0;i<n;i++){
    	cout<<arr[i].second + 1 <<" ";
    }

}