#include <iostream>

#include <bits/stdc++.h>

using namespace std;



int main()

{   

    int t;

    cin >> t;

    

    for(int x = 1; x <= t; x++){

        int n;

        cin >> n;

        vector<int> arr(n);

        vector<int> even;

        vector<int> odd;

        

        for (int i = 0; i < n; i++) {

            cin >> arr[i];

            

            if(i%2 == 0) even.push_back(arr[i]);

            else odd.push_back(arr[i]);

        }

        

        sort(even.begin(),even.end());

        sort(odd.begin(),odd.end());

        

        

        int e = 0, o = 0;

        

        for (int i = 0; i < n; i++) {

            if(i%2 == 0) arr[i] = even[e++];

            else arr[i] = odd[o++];

        }

        

        int flag = 0, idx = 0;

        

        for (int i = 0; i < n-1; i++) {

            if(arr[i] > arr[i+1]){

                flag = 1;

                idx = i;

                break;

            }

        }

        

        if(flag == 0){

            cout << "Case #" << x <<": OK" << endl;

        }

        else{

            cout << "Case #" << x <<": " << idx << endl;

        }

        

    }   

}