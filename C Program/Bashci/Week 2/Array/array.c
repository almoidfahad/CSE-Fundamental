#include <stdio.h>
#include <limits.h>
int main(){

    // double a[5];

    // Access single value in Array 

    // for(int i = 0; i<5; i++){
    //     scanf("%d ", &a[i ]);
    // }
    // printf("%d", a[1]);


    //Access multiple value in Array
//     for(int i = 0; i<5; i++){
//         scanf("%lf", &a[i]);
//     }
    
//    for (int i= 0; i<5;i++){
//         printf("%lf \n", a[i]);
//    } 


    //Sum and Average of an array Element

    // int n;
    // scanf("%d",&n);

    // int a[n];
    // for(int i = 0; i< n;i++){
    //     scanf("%d", &a[i]);
    // } 

    // int sum = 0 ;
    
    // for(int i= 0; i < n;i++){
    //     //Every index value can do sum
    //     // sum = sum+ a[i];
    //     sum += a[i];
    //     // printf("%d\n", sum);
    // }
    // printf("%d\n", sum);

    // double avg = sum / n;
    // printf("%.2lf",avg); 

   int n;
scanf("%d", &n);

int a[n];

for(int i=0 ; i<n;i++){
    scanf("%d", &a[i]);
}

int min = INT_MAX, max  = INT_MIN;


for(int i=0; i<n; i++){
    if(a[i]<min){
        min = a[i];
    }
    if(a[i] > max){
        max = a[i];
    }
}
printf("Minium= %d, Maximum= %d",min , max );


}