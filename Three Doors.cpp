#include <bits/stdc++.h>
using namespace std;

void check(int key,int arr[]){
	int temp[3]={0,0,0};
	while(key>0){
		temp[key-1]=1;
		if(arr[key-1]!=0) key=arr[key-1];
		else break;
	}
	if(temp[0]==1 && temp[1]==1 && temp[2]==1 ) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main(){

	// freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    	int key;
    	cin>>key;
    	int door_keys[3];
    	cin>>door_keys[0]>>door_keys[1]>>door_keys[2];
    	check(key,door_keys);
    }
}