#include <stdio.h>
int main(){

    // Week 2

    //Problem 2
    int a,b,c;
    long long int d;
    scanf("%d %d %d, %lld", &a,&b,&c,&d);

    for(int i = 1; i<=1;i++){
        for(int j = 1; j<=4; j++){
            long long int d;
            if((-10^9 <= a && b && c<=10^9) && (-10^18 <= d) && (10^18>=d)){
                d = a+b*c;
                // printf("%d %d %d, %lld", a, b, c, b);
                printf("Yes");

            }
            else{
                printf("No");
            }


        }
    }





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