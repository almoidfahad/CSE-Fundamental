#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a[3];

    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }

    int mn = INT_MAX;

    int mx = INT_MIN;
     
    for (int i = 0; i < 3; i++)
    {
        mn = min(a[i],mn);
        mx = max(a[i],mx);
    }
    cout<< mn <<" " <<mx<<endl;
    
    

    return 0;
}