#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int a[n+5];

    for (int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }

    int f[100000]={0};

    for (int i = 0; i < n; i++)
    {
        f[a[i]]=1;
    }

    for (int i = 0; i < 10; i++){
        printf("%d %d\n",i, f[i]);
    }

  
    int search;
    scanf("%d", &search);

    for (int i = 0; i < search; i++)
    {
        int querys;
        scanf("%d", &querys);
        printf("%d ", querys);

        if (f[querys] == 1) 
        {
            printf("Ache\n");
        }
        else{
            printf("Nai\n");
        }
        
    }
    


/*
    int n, search;
    scanf("%d", &n);

    int a[n+5];

    for (int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }

    int f[100000]={0};

    for (int i = 0; i < n; i++)
    {
        f[a[i]]=1;
    }
    

    for (int i = 0; i < 10; i++){
        printf("%d %d\n",i, f[i]);
    }

    scanf("%d", &search);
     printf("Single query Have(1) or No(0): %d", f[search]);
    
*/
} 