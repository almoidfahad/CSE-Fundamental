#include<bits/stdc++.h>
using namespace std;

    //Create an array in a function 
    // initialize its varibles
    // return the array to the amin funciton 
    // print the array



int* func(){
        int *ar = new int[5];

        for (int i = 0; i < 5; i++)
        {
            ar[i] = i+1; 
        }
        
        return ar;
}



int main(){

    int* main_arr = func();
    
    for (int i = 0; i < 5; i++)
    {
        cout<<main_arr[i]<<endl;
    }
    


    return 0;
}