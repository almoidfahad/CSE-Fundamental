#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa; 

    Student(int roll, int cls, double gpa){
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

    }

};

int main(){

    Student rahim(45, 5, 3.3);
    //   new Student;

    // cout<<rahim.roll <<" " << rahim.cls << " " << rahim.gpa <<endl;
    // cout<<karim.roll <<" " << karim.cls << " " << karim.gpa <<endl;


    return 0;
}
