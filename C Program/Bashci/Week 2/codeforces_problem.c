#include <stdio.h>
int main(){

  


    //Problem 4
    
    long int n;
    scanf("%ld", &n);

    for(int i=2; i<= n;i+=2){
        printf("%d\n", i);
    }




    //Problem 3 
    // int n;
    // scanf("%d",&n);

    // for (int i=1; i<=n; i++){
    //     if(n%i==0){
    //         printf("%d \n",i);
    //     }
        
    // }


    //Problem 2
    // long long int a,b,c,d;
    // scanf("%lld %lld %lld %lld", &a, &b, &c,&d);
    
    // long long int x1= (a * b) - c;
    // long long int x2= (a * b) + c;
    // long long int x3= a + (b * c);
    // long long int x4= a - (b * c);
    // long long int x5= (a + b ) - c;
    // long long int x6= (a - b) + c;
        
    
    // int count=0;
    // if(x1 == d || x2 == d || x3 == d ||   x4 == d || x5 == d || x6 == d ){
    //     count=1;
    // }
    // if(count==1){
    //     printf("YES");
    // }
    // else{
    //     printf("NO");
    // }



    //Problem 1;
    // Next Alphabet
    // if('a'<='z' && 'z'>='a'){       
    //     char c;
    //     scanf("%c", &c);

    //     if(c=='z'){
    //         printf("a");
    //     }
    //     else{
    //         char next_let=c+1;
    //         printf("%c",next_let);

    //     }
    // }
}