#include <bits/stdc++.h>
using namespace std;

int c=0;

void Quantity(float arr[][11],int i,int j){

	if(arr[i][j]<1) return;

	arr[i+1][j]+=(arr[i][j]-1)/2;
	arr[i+1][j+1]+=(arr[i][j]-1)/2;

	if(arr[i][j]>=1) c++;
	if(arr[i][j]>=1 && (arr[i-1][j-1]-1)/2 >=1) c--;

	Quantity(arr,i+1,j);
	Quantity(arr,i+1,j+1);

	

}

int main(){
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    int t;
    cin>>n>>t;
    float arr[n+1][11];
    for(int i=0;i<n+1;i++){
    	for(int j=0;j<=i;j++){
    		arr[i][j]=0;
    	}
    }
    arr[1][1]=t;
   
    Quantity(arr,1,1);
    cout<<c;
}