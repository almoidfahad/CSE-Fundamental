#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int m[n][n];

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
        
    }

    int main_diagonal = 0, secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if( i == j ){
                main_diagonal = main_diagonal + m[i][j];
            }
            if( i + j == n -1){
                secondary_diagonal = secondary_diagonal + m[i][j];
            }
        }
        
    }
    
    int diff = abs (main_diagonal - secondary_diagonal);

    printf("%d", diff);
    
    
}