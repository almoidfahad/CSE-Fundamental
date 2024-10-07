#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int EvenCount = 0,OddCount = 0, PositiveCount=0, NegativeCount=0;
    //Even
    for(int i=1; i<=n; i++){
        int x;
        scanf("%d",&x);

       if(x%2==0){
        EvenCount++;
       }      
       //Odd   
       else{
        OddCount++;
       }
       //positive
       if(x>0){
        PositiveCount++;
       }
       //negative
       else if(x<0){
        NegativeCount++;
       }
       
    }
    printf("Even: %d\n",EvenCount);
    printf("Odd: %d\n",OddCount);
    printf("Positive: %d\n",PositiveCount);
    printf("Negative: %d\n",NegativeCount);



return 0;
}