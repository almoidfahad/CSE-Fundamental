#include<iostream>
using namespace std;
int main(){

    int x = 6;

    if (x%2 == 0){
        cout << "Even" <<endl;

    }
    else{
        cout<<"Odd" <<endl;  
    }

    //using Tarnary operation

    int u  = 9;

    u%2 == 0 ? cout<<"Even" : cout<<"Odd";


    return 0;
}