#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    int marks;
};

int main(){

    int n;
    cin>>n;

    // int arr[n];
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        // cin>>arr[i];
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;

    }
    for (int i = 0; i < n; i++)
    {
        // cin>>arr[i];
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;

    }
    
    
    return 0;
}