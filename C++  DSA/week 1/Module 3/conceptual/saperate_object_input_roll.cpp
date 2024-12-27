#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    int marks;

};

int main(){

    int n;

    cin>> n;
    
    Student arr[n+1];

    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i].name>>arr[i].marks;
        arr[i].roll = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll <<" "<<arr[i].marks <<endl;
    }
    
}