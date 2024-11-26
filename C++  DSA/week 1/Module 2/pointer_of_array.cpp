#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [5];


    *(arr) = 10;

    *(arr+1) = 20;

    *(arr+2)= 30;

    *(arr + 3) = 40;

    *(arr + 4) = 50;

    for (int i = 0; i < 5; i++)
    {
        cout<< (arr + i)<<endl;
    }
    





    // cout<< &arr[0] <<endl; //arr er prothom ghor er address

    // cout<<arr <<endl; //arr namm tar maan 




    return 0;
}