#include <stdio.h>
int main(){
    char a[100] = "air";
    char b[100] = "bird";

    int cmp = strcmp(b,a);


    printf("%d",cmp);
}