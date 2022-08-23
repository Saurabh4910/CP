#include<bits/stdc++.h>
using namespace std;

int * rotLeft(int a[],int d)
{   
   int n= sizeof a; 
   int D=d%n;
   int na[n];
   if(D==n)
   {
     return a;
   }
   else
   {
     for(int i=0; i<n ; i++)
     {
      if(i<n-D)
      {
         na[i]=a[D+i];
      }
      else
      {
         na[i]=a[i+D-n];
      }
      
     }
    }
    return na;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; int a[n]; int d; 
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    rotLeft(a,d);
    return 0;
}