#include<stdio.h>
int main(){
    int arr [3] [3] = {{1,2,3},{4,5,6}, {7,8,9}} ;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("i = %d, j = %d, Address = %d ||", i, j, &arr[i][j]);
            printf("i = %d, j = %d, Address = %d ||", i, j, arr[i][j]);
        }
        printf("\n");
        
    }
  /*
    int arr [3] [3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("i = %d, j = %d, Address = %d ||", i, j, &arr[i][j]);
            printf("i = %d, j = %d, Address = %d ||", i, j, &arr[i][j]);
        }
        printf("\n");
        
    }
  */
    


}