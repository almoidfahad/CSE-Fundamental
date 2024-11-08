#include<stdio.h>

int isPalin(int *a, int i, int j){

    if( i > j ){
        return 0;
    }

    // return a[i] == a[j] && isPalin(a, 1 + 1, j - 1);
    return a[i] != a[j] || isPalin(a, 1 + 1, j - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];

    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (isPalin(a, 0, n-1)){
        // printf("YES\n");
        printf("NO\n");
    }

    else{
        // printf("NO\n");
        printf("YES\n");
    }
    
}