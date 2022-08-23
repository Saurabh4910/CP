#include <iostream>
using namespace std;
int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;
    cin>>N;int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int M;
    cin>>M;
    for(int i=0;i<M;i++){
        int key;
        cin>>key; int mid;
        int low=0,high=N-1;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>key) high=mid-1;
            else if(arr[mid]<key) low=mid+1;
            else {
                if(mid==0) {
                    cout<<1<<" ";
                    break;
                }
                else if(arr[mid-1]!=key) {
                    cout<<mid+1<<" ";
                    break;
                }
                
                else high=mid-1;
            }
        }
        if(arr[mid]!=key) {
            cout<<-1;
            break;
        }
        
        low=0;high=N-1;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>key) high=mid-1;
            else if(arr[mid]<key) low=mid+1;
            else{
                if(mid==N-1){
                cout<<N<<endl;
                break;
                }
                else if(arr[mid+1]!=key){
                cout<< mid+1<<endl;
                break;
                }

                else low=mid+1;
            }
        }
    }
    return 0;
}