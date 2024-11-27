#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa; 

    // Student(int r, int c, double g){
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }



};


int main(){

    Student rahim;
    cin>>rahim.roll>>rahim.cls>>rahim.gpa; 



//================================================

    // Student rahim(45, 5, 3.3);
    // Student karim(2, 5, 5.00);


//================================================
    // int r;
    // int c;
    // double g;
    // cin>> r >> c >> g;

    // Student rahim(r, c , g);

    // Student karim(2, 5, 5.00);

//==============================================
    // Student rahim;
    // rahim.roll = 45;
    // rahim.cls = 5;
    // rahim.gpa = 3.20;

    // Student karim;
    // karim.roll = 2;
    // karim.cls = 5;
    // karim.gpa = 5.00;


    cout<<rahim.roll <<" " << rahim.cls << " " << rahim.gpa <<endl;
    // cout<<karim.roll <<" " << karim.cls << " " << karim.gpa <<endl;


    return 0;
}