// #include<iostream>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>> a >> b;

    // if(a<b){
    //     cout<<a <<endl;
  
    // }
    // else{
    //     cout<< b <<endl;
    // }

    cout<<min(a,b) <<endl;
    cout<<max(a,b) <<"\n\n";

    // He can do working with bing data. This is vary powerfull function, This is use for daly life
    cout<<"Working with BIG data: \n"<< min({6, 3 ,3, 35 , 7, 4,6, 2,8}) <<endl;
    cout<<max({9349, 43545 ,44545, 6775,45 , 5656})<<endl;

}