#include <stdio.h>
int main(){



    //Module 05
    /*
    int a ,b, c;
    scanf("%d %d %d", &a , &b , &c);

    //quiz 1
   
      if(a>b && b>c)
    {
        printf("%d",a);
    }
    else if(b>a && c>b)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
   */
//====================================================
    /*
    //quiz 2
    int x = 1;
    if (x < 5)
    {
        printf("hello");
    }
    if (x <= 10)
    {
        printf("hi");
    }
    else
    {
        printf("no");
    }
    */
//======================================
/*
    //quiz 3
    int x =4;
    if(x%2!=0)
    {
        printf("Even ");
    }
    else
    {
        printf("Odd ");
    }
    if(x>0)
    {
        printf("Positive ");
    }
    else
    {
        printf("Negative ");
    }

*/
//================================================
/*
//quiz 4
    int x = 0;
    if (x == 1)
    {
        if (x == 0)
        {
            printf("inside if if\n");
        }
        else
        {
            printf("inside if else\n");
        }
    }
    else
    {
        printf("inside else\n");
    }
*/
   //====================================================

   /*
    //quiz 5

    int marks = 76;
     if(marks >= 80)
    {
        printf("A+");
    }
    else if(marks >= 70)
    {
        printf("A");
    }
    else if(marks >= 70)
    {
        printf("A-");
    }
    */
//====================================================
/*
//quiz 6

int num = 5;
if (num > 10) {
   printf("Greater than 10");
} else if (num < 10) {
   printf("Less than 10");
} else {
   printf("Equal to 10");
}
*/
//==============================================

  /*
    //quiz 7
   int marks = 92;
     if(marks >= 80)
    {
        printf("A+");
    }
    if(marks >= 70)
    {
        printf("A");
    }
    if(marks >= 70)
    {
        printf("A-");
    }
    */
//===========================================
/*

    //quiz 8
     int x = 0;
    if (x == 1)
    {
        if (x >= 0)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    else {
        printf("Invalid Number");
    }
*/
//================================================

/*

//quiz 9
int x = 5;
int y = 4;
    if(x>=y && x<y+4)
    {
        if(y<5)
        {
            printf("hi ");
        }
        if(y<10)
        {
            printf("hi ");
        }
    }
    else
    {
        printf("hello ");
    }
    */
//==================================================
// quiz 10
// int x = 5;
// int y = 4;
//     if(x>=y && x<y+4)
//     {
//         if(y<5)
//         {
//             printf("hi ");
//         }
//         else if(y<10)
//         {
//             printf("hi ");
//         }
//     }
//     else
//     {
//         printf("hello ");
//     }
//=========================================
// for(int i=0; i<=10; i++)
//     {
//         printf("hi ");
//         if(i>2)
//         {
//             break;
//         }
//     }
//===============================
// int i=3;
// while(i<=5)
// {
//      for(int j=0;j<i;j++)
//      {
//          printf("*");
//      }
//      i++;
//  }
//============================
//infinity loop
// int i = -3;
// while(i<0)
// {
//     for(int j=0;j<5;j++)
//     {
//         printf("#");
//      }
//      i--;
// }
//===========================
// for(int i=-4;i>=0;i++)
//     {
//         for(int j=5;j<2;j++)
//         {
//             printf("hi ");
//         }
//     }
//==================
// for(int i=0;i<5;i++)
//     {
//         if(i==3)
//         {
//             continue;
//         }
//         printf("%d ",i);
//     }

//===============================
// for(int i=0; i<=10; i++)
//     {
//         if(i>2)
//         {
//             break;
//         }
//         printf("hi ");
//     }
//===============================
for(int i=0; i<=10; i++)
    {
        if(i>3)
        {
            continue;
        }
        printf("hi ");
    }



}