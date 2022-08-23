#include <bits/stdc++.h>
using namespace std;

int f=0;

void check(int a,int b,int k,int arr[]){
	if(f==1) return;
	else{
		if(a==b){
			f=1;
			arr[k]=b;
			cout<<"YES"<<endl<<k+1<<endl;
			for(int i=0;i<k+1;i++){
				cout<<arr[i]<<" ";
			}
			return;
		}
		else if(a>b){
			return;
		}
		arr[k]=a;

		check((10*a)+1,b,k+1,arr);
		check(2*a,b,k+1,arr);
		
	}
}

int main(){

	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a,b;
    cin>>a>>b;
    int N= log2(b)/log2(a); //finding number of elements in array
    int arr[N];
    check(a,b,0,arr);
    if(f==0) cout<<"NO";
}