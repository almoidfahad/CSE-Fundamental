#include <stdio.h>
int main(){

    int count = 1;    
    for(int row= 0; row<= 4; row++){
      
        for(int col=0; col<=row; col++){
            printf("* ");
           count++;
        }
        printf("\n");
    }
    printf("%d",count);


}