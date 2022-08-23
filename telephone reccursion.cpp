#include <bits/stdc++.h>
using namespace std;

vector<string> alphabets={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> ans;

 void f(int i,char *temp,int N,int count,string &digits  ){
        if(i==N){
            ans.push_back(temp);
            return;
        }
        
        if((digits[i]-0)!=7 && (digits[i]-0)!=9 ){
            temp[count]=alphabets[digits[i]-2][0];
            f(i+1,temp,N,count+1,digits);
        }
    }
int main()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N; cin>>N; 
    string digits;
    cin>>digits;
    char temp[N];
    f(0,temp,N,0,digits);

    cout<<ans[1];
	return 0;
}