#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    int read[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &read[i]);
    }

    int b_read = 0, time = 0;

    for (int i = 0; i < n; i++) {
        time += read[i];
        
        if (time > t) {
            break; 
        }

        b_read++;
    }
    printf("%d\n", b_read); 
}







// #include<stdio.h>
// int main(){
//     int n,t;
//     int b[100000];

//     scanf("%d %d", &n, &t);


//     for (int i = 1; i <= n; i++){
//         scanf("%d",& b[i] );
//     }
    
//     int left = 0, time = 0, maxB = 0;

//     for (int right = 0; right < n; right++){
//         time = time + b[right];

//         for( int left; time > t; left++){
//             time = time - b[left];
//         }

//         int books = right - left + 1;

//         if(books>maxB){
//             maxB = books;
//         }


//     }
    


//     printf("%d",maxB);
    
// }