 #include<bits/stdc++.h>
 using namespace std;
 int main(){

     int n;
     cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // sort(a, a+5);
    // sort(a+2, a+5);
    sort (a, a+n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
        
    

     return 0;
 } 