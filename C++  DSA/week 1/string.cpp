#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    cin.ignore(); 
 
    char a[100];
    // cin>>a;
    cin.getline(a,100); 

    cout<<n<< endl <<a  <<endl;

    
    string s;
    cin>> s;
    cout<<s;
    return 0;
}