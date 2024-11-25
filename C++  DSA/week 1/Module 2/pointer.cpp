#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;

    cout<< & a <<endl;

    int * a_pointer = &a ;

    cout<< a_pointer <<endl;

    
    cout<<"Befor deferencing" <<endl;

    cout<< a <<endl;

    //Befor dereferenceing
    cout<<"After deferencing" <<endl;
    *a_pointer = 15;

    cout<< a <<endl;

    cout<< *a_pointer <<endl;


    return 0;
}