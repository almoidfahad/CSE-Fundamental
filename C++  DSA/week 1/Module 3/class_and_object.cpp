#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    char name[100];
    int roll;
    double gpa; 


};

 
int main(){
    
    // int a;
    Student a;

    // a.roll =  20;
    // a.gpa = 4.5;
    // char temp[100] = "Sakib";
    // strcpy(a.name, temp);
    
    cin.getline(a.name, 100);

    cin.ignore();

    cin>>a.roll >> a.gpa ;

    cout<< a.name <<" "<<a.roll << " " <<a.gpa <<endl;



    return 0;
}