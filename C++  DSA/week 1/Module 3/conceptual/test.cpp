#include<bits/stdc++.h>
using namespace std;

int main(){
    //-------------------------------------------------------------
    cout<<endl <<endl <<"========================================================";

    cout<<endl <<endl<<"Class: 9 | Subject: Digital"<<endl<<endl;
    long long int n;
    cin>> n;

    long long int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    for (long long int i = 1; i <= n; i++)
    {
        long long int persentage_result = arr[i] * 7 /10;


        cout<<"Roll: "<<i <<"   "<<"Mark : " <<arr[i] <<"  " <<"Percentage: "<<persentage_result <<endl;
    }


    //----------------------------------------------------------------------
    cout<<endl <<endl <<"========================================================";
    cout<<endl <<endl <<"Class: 7 | Subject: Bangla"<<endl<<endl;
    long long int n2;
    cin>> n2;

    long long int arr2[n2];
    for (int i = 1; i <= n2; i++)
    {
        cin>>arr2[i];
    }
    for (long long int i = 1; i <= n2; i++)
    {
        long long int persentage_result2 = arr2[i] * 7 /10;


        cout<<"Roll: "<<i <<"   " <<"Mark : " <<arr2[i] <<"  " <<"Percentage: "<<persentage_result2 <<endl;
    }
    //----------------------------------------------------------------------------
    cout<<endl <<endl <<"========================================================";
    cout<<endl <<endl <<"Class: 8 | Subject: Digital"<<endl<<endl;
    long long int n3;
    cin>> n3;

    long long int arr3[n3];
    for (int i = 1; i <= n3; i++)
    {
        cin>>arr3[i];
    }
    for (long long int i = 1; i <= n3; i++)
    {
        long long int persentage_result3 = arr3[i] * 7 /10;

        cout<<"Roll: "<<i <<"   " <<"Mark : " <<arr3[i] <<"  " <<"Percentage: "<<persentage_result3 <<endl;
    }
    //------------------------------------------------------------------------------------------
    cout<<endl <<endl <<"========================================================";
    cout<<endl <<endl <<"Class: 7 | Subject: Digital"<<endl<<endl;
    long long int n4;
    cin>> n4;

    long long int arr4[n4];
    for (int i = 1; i <= n4; i++)
    {
        cin>>arr4[i];
    }
    for (long long int i = 1; i <= n4; i++)
    {
        long long int persentage_result4 = arr4[i] * 7 /10;

        cout<<"Roll: "<<i <<"   " <<"Mark : " <<arr4[i] <<"  " <<"Percentage: "<<persentage_result4 <<endl;
    }

    
}