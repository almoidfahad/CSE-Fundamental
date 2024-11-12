#include<stdio.h>

void printIncreasing(int n) {

    if (n == 0) return;  

    printIncreasing(n - 1);  
    
    printf("%d ", n); 
}

void printDecreasing(int n) {

    if (n == 0) return; 
    
    printf("%d ", n);  
    
    printDecreasing(n - 1); 

}

int main() {
    int t, n;

    scanf("%d", &t);

    for (int cs = 0; cs < t; cs++) {
       
        scanf("%d", &n);

        printIncreasing(n);

        printDecreasing(n - 1);

        printf("\n");
    }
}
