#include <stdio.h>
int main(){
    int Mark;
    scanf("%d", &Mark);

    //Update version 5.3 vid

    //Pass Part
    if(Mark<=100 && Mark>=33){
        if(Mark>=80 && Mark<=100){
            printf("Your Great Point is A+\n");
            //Scholarship 
            if(Mark>=90){
                printf("Congratulations, You have got scholarship\n");
            }

        }
        else if(Mark>=70 && Mark<=79){
            printf("Your Great Point is A\n");
        }
        else if(Mark>=60 && Mark<=69){
            printf("Your Great Point is A-\n");
        }
        else if(Mark>=50 && Mark<=59){
            printf("Your Great Point is B\n");
        }
        else if(Mark>=40 && Mark<=49){
            printf("Your Great Point is C\n");
        }
        else if (Mark>=33 && Mark<=39){
            printf("Your Great Point is D\n");
        }
        printf("You have Pass");
    }

    // Fail part
    else{
        if(Mark>=0 && Mark<=32){
        printf("Your Great Point is F\n");
        }
        else{
            printf("Invalid Number");
        }
        printf("You have Faild");
    }

   
    



/*
    //Simple Version

    if(Mark>=80 && Mark<=100){
        printf("Your Great Point is A+\n");
    }
    else if(Mark>=70 && Mark<=79){
        printf("Your Great Point is A\n");
    }
    else if(Mark>=60 && Mark<=69){
        printf("Your Great Point is A-\n");
    }
    else if(Mark>=50 && Mark<=59){
        printf("Your Great Point is B\n");
    }
    else if(Mark>=40 && Mark<=49){
        printf("Your Great Point is C\n");
    }
    else if (Mark>=33 && Mark<=39){
        printf("Your Great Point is D\n");
    }
    else if(Mark>=0 && Mark<=32){
        printf("Your Great Point is F\n");
    }
    else{
        printf("Invalid Number");
    }
*/


 /*
   if(Mark>=80 && Mark<=100){
        printf("Your Great Point is A+\n");
    }
    if(Mark>=70 && Mark<=79){
        printf("Your Great Point is A\n");
    }
    if(Mark>=60 && Mark<=69){
        printf("Your Great Point is A-\n");
    }
    if(Mark>=50 && Mark<=59){
        printf("Your Great Point is B\n");
    }
    if(Mark>=40 && Mark<=49){
        printf("Your Great Point is C\n");
    }
    if (Mark>=33 && Mark<=39){
        printf("Your Great Point is D\n");
    }
    if(Mark>=0 && Mark<=32){
        printf("Your Great Point is F\n");
    }
    if(Mark<0 || Mark>100){
        printf("Invalid Number");
    }
 */


/*
        if(Mark>=80){
        printf("Your Great Point is A+\n");
    }
    else if(Mark>=70){
        printf("Your Great Point is A\n");
    }
    else if(Mark>=60){
        printf("Your Great Point is A-\n");
    }
    else if(Mark>=50){
        printf("Your Great Point is B\n");
    }
    else if(Mark>=40){
        printf("Your Great Point is C\n");
    }
    else if (Mark>=33){
        printf("Your Great Point is D\n");
    }
    else if(Mark>=0){
        printf("Your Great Point is F\n");
    }
    else{
        printf("Invalid Number");
    }
*/



/*
     if(0){
        printf("Your Great Point is A+\n");
    }
    else if(0){
        printf("Your Great Point is A\n");
    }
    else if(0){
        printf("Your Great Point is A-\n");
    }
    else if(0){
        printf("Your Great Point is B\n");
    }
    else if(0){
        printf("Your Great Point is C\n");
    }
    else if (1){
        printf("Your Great Point is D\n");
    }
    else if(0){
        printf("Your Great Point is F\n");
    }
    else{
        printf("Invalid Number");
    }
*/
}