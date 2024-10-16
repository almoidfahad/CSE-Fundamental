#include <stdio.h>
int main(){

}    
//=========================================================================
//problem 2
 /*
Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.

Input
Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

Output
Print "Right" if the comparison is true, "Wrong" otherwise.

Examples
InputCopy
5 > 4
OutputCopy
Right
InputCopy
9 < 1
OutputCopy
Wrong
InputCopy
4 = 4
OutputCopy
Right
    */
//     int a, b;
//     char s;
//     scanf("%d %c %d",&a, &s, &b);

//     if(s == '>'){
//         if (a > b){
//             printf("Right\n");
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
//     else if(s == '<'){
//         if(a < b){
//             printf("Right\n");
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
//     else{
//         if( a == b){
//             printf("Right\n");
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }

//=============================================================
/*
    // Problem_1 Char

    Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

    Note : difference between 'a' and 'A' in ASCII is 32 .

    Input
    Only one line containing a character X which will be a capital or small letter.

    Output
    Print the answer to this problem.

    Examples
    Input
    a
    Output
    A
    InputCopy
    A
    OutputCopy
    a
*/

//     char ch;
//     scanf("%c", &ch);


//     if('a'<=ch && ch<='z'){
//         //Apper case
//         ch = ch - 32;
//     }
//     else{
//         //Lower case
//         ch = ch + 32;
//     }
//         printf("%c", ch);
// }