#include<bits/stdc++.h>
using namespace std;

vector<int> ans;

int find(int arr[],int n,int i){
    int sol=-1;
    for(int j=0;j<n;j++){
        if(j==i) continue;
        if(arr[j]<=arr[i]*2 && arr[j]>sol) sol=arr[j];
    }
    return sol;
}

void findMentor(int arr[],int n){
    for(int i=0;i<n;i++){
        ans.push_back(find(arr,n,i));
    }
}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++) cin>>arr[j];
        findMentor(arr,n);
        cout<<"Case #"<<i+1<<":";
        for(int j=0;j<n;j++) cout<<ans[j]<<" ";
        cout<<endl;
    }

}