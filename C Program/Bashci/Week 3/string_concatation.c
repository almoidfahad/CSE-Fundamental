#include<stdio.h>
#include<stdio.h>
int main(){

    char a[20] = "Hello ";
    char b[20] = "World? ";

    strcat(b, a);
    printf("%s", b);


    /*
        char a[20] = "Hello ";
    char b[20] = "World?";
   
    int len_a = strlen(a);
    int len_b = strlen(b);

    char length = len_a + len_b;

    for (int i = len_b, j = 0; i < length; i++, j++){
        // a[i] = b[j];
        b[i] = a[j];
    }

    a[length] = '\0';

    printf("%s \n%s", a ,b );
    */


}