#include<stdio.h>

void printDigits(int n){

    if(n==0){

        return;
    }

    int digit = n % 10;

    printDigits(n/10);
    
    printf("%d ", digit);
}

int main(){

    int t;
    scanf("%d", &t);

    for (int cs = 0; cs < t; cs++)
    {
        int n;
        scanf("%d", &n);

        if (n == 0)
        {
            printf("0");
        }
        
        
        printDigits(n);

        printf("\n");
    }

    
}
/*
//output

1 2 1 
3 9 
1 2 3 4 5 6 
0
1 0 0 0 0 0 0 0 0 0 


*/