#include<bits/stdc++.h>
using namespace std;   

int *p ;

void fun(){
    int *x = new int;
    *x = 10;

    p = x;

    cout<<"fun :"<< *p <<endl;
    return;
}

int main(){

    fun();
    cout<<"main :" <<*p <<endl;
    
    
    // int x = 10;
     
    // int *p = new int;
    // *p = 100;
    
    // cout<< *p <<endl; 

    return 0;
}


/*
    Output : Check in online compiler
    
    fun: 10
    main: 10

*/