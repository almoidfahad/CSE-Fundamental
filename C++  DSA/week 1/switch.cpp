#include<iostream>
using namespace std;

int main(){
    int day ;
    cin>> day;
    switch (day)
    {
    case 1: 
        cout<<"Saturday\n";

    case 2:
        cout<<"Sunday\n";
        break;
    case 3:
         cout<< "Monday\n";
        break;
    case 4:
        cout<< "Tuesday\n\n";
        break;
    case 5:
        cout<<"Wednessday\n\n";
        break;
    case 6:
        cout<<"Thursday\n\n";
        break;
    case 7:
        cout<<"Friday\n\n";
    

        break;
    
    default:
        break;
    }
//prime number
    int x;
    cin>>x;
    cout<<"Prime Number Program "<<x <<" : ";
    switch (x%2)                
    {
    case 0:
        cout<<" Even\n";
        break;

    case 1:
        cout<<" Odd\n";
        break;
    
    default:
        break;
    }


}