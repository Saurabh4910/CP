#include<bits/stdc++.h>
using namespace std;


void pass(char* inp){
	cout<<inp[1];
}

int main()
{	
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

	int N;cin>>N;
	string digits;
	cin>>digits;
	// cout<<digits;
	char inp[2]={'2'};
	inp[1]='5';
	pass(inp);

}
