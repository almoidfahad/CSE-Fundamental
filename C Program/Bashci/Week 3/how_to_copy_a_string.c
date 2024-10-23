#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    char b[10]="abcdef";


    /*
        //strings can be copied very easily through this function 
          strcpy(a, "hello");
        printf("%s", a);

    */
    
    

    //strings can be copied very easily through this function 
    strcpy(a, b);
     printf("%s %s", a, b);
    

  /*
      int length = strlen(b); 

        printf("%s %s\n",a, b );
        
        for (int i = 0; i < length; i++){
            a[i] = b[i];
        }

        a[length] = '\0';
        
    // printf("%s %s", a, b);
  */

   
    
    return 0;
}