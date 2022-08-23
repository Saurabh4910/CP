#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first>p2.first) return true;
    
    if(p1.first==p2.first){
        if(p1.second<p2.second){
            return true;
        }
        else return false;
    }
    return false;
}
int mn(int *arr){
	return arr[3];
}

int main() {
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int arr[5]={1,2,3,4,5};
	cout<< mn(arr);
}