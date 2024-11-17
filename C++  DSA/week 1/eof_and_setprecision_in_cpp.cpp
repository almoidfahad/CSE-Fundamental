#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x;

    while (cin>>x)
    {
        cout<< x << endl;
    }

    // setprecision
     
    double d = 23.343434;

    cout<< fixed  << setprecision(3) << d <<endl;


}