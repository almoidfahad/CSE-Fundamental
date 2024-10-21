#include<stdio.h>
int main(){

    char str[15];
    fgets(str, sizeof(str),stdin);
    // printf("%s", str);
    fputs(str, stdout);
    // puts(str);

/*
        char str[15];
    // scanf("%[^\n]s", str);
    fgets(str, sizeof(str),stdin);
    // printf("%s", str);
    puts(str);
*/
  
  /*
    char str[5];
    scanf("%[^\n]s", str);
    printf("%s", str);
  */


    /*
        char str[10]="abcd";

        // for (int i = 0; i < 4; i++){
        // printf("%c", str[i]);
        // }
        
        printf("%s", str);
    */
   return 0;
}  