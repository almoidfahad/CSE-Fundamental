#include <stdio.h>
#include<string.h>
int main(){
    char str[10] = "abc \0 d";

    //work in one line
    int length = strlen(str);


    /*
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    */
    printf("%d", length);
    

}