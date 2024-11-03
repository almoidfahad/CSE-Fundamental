#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int frequency[100001] = {0}; 

    int num;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        frequency[num]++;  
    }
    int count = 0;
    for (int i = 1; i <= 100000; i++) {
        if (frequency[i] == 1) {
            count++; 
        }
    }
    printf("%d\n", count);

}
