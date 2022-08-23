#include<bits/stdc++.h>
using namespace std;

struct dataType{
	string name;
	int region;
	int score;
};

bool cmp(dataType p1,dataType p2){
	if(p1.region<p2.region) return true;
	if(p1.region == p2.region){
		if(p1.score > p2.score) return true;
		return false;
	}
	return false;
}

int main(){
	// freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    dataType arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i].name>>arr[i].region>>arr[i].score;
    }
    sort(arr,arr+n,cmp);

    int region=1;

    for(int i=0;i<n,region<=m;i++){
    	if(arr[i].region == region && arr[i+1].region==region){
    		if(arr[i+1].region==arr[i+2].region && arr[i+1].score==arr[i+2].score){
    			cout<<"?"<<endl;
    			region++;
    		}
    		else {
    			cout<<arr[i].name<<" "<<arr[i+1].name<<endl;
    			region++;
    		}
    	}
    }
}