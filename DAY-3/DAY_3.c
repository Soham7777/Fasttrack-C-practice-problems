#include "DAY_3.h"
#include<math.h>
#include<stdio.h>

// 1. WAP to convert a binary number to decimal and vice versa.

int convert(long long n)

{
    int decimal =0 ,i=0 ,reminder; //declaration

    while(n!=0)
    {
        reminder = n%10; //getting last digit

        n /= 10; //removing last digit

        decimal += reminder * pow(2, i);

        ++i; //incrementing the value to increase the power
    }
    return decimal;
}


/*2. Generate a sequence of numbers such that every number in the sequence
is the sum of the previous three numbers.
The first three numbers are 0,0,1. */





/*3. WAP to print the following sketch by taking in N as number of rows

* * * *
  * * *
    * *
      *

*/

void generate_pattern(int n)
{
     int m;
     m = n;

   for(int i=1; i<=n; i++)
   {
       for(int j=1; j<i; j++)
       {
           printf(" ");
       }
       for(int k=1; k<=m; k++)
       {
           printf("*");
       }
       m--;

      printf("\n");
    }
}

/*5. Write a recursive function for calculating power of a number.
Take base number and exponent from user. */

int power(int base, int a){
    if (a != 0)
        return (base * power(base, a - 1)); //inbuilt function in math.h
    else
        return 1;
}




// 6. Write a recursive function for calculating factorial of a number.


int find_factorial(int n)
{
   //Factorial of 0 is 1
   if(n==0)
      return(1);

   //Function calling itself
   return(n*find_factorial(n-1));
}


// 7. Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …




// 8. Concatenate two integer values using macros

#define concat(a,b,c) a##b##c


// 9. Find square of a number using macros.

#define SQUARE(a) (a * a)



/* 10. Write a menu driven program to display the mathematical functions like
square root, natural log, log10x, power(x,n), Cos(x). (use math.h) */

void calculator(){

  int choice;

  printf("Press 1 for square root \n");
  printf("Press 2 for natural log \n");
  printf("Press 3 for log10x \n");
  printf("Press 4 for power(x,n) \n");
  printf("Press 5 for Cos(x) \n");
  scanf("%d",&choice);


  switch(choice){
          case 1:{
              printf("Enter no : \n");
              double n = input();
              double result = sqrt(n);
              printf("square root: %f",result);
              break;
          }
          case 2:{
              printf("Enter no : \n");
              double n = input();
              double result = log(n);
              printf("natural log: %f",result);
              break;

          }
          case 3:{
              printf("Enter no: ");
              double n = input();
              double result = log10(n);
              printf("log10x: %f",result);
              break;

          }
          case 4:{
              printf("Enter nos: ");
              double n = input();
              double x = input();
              double result = pow(n,x);
              printf("power(n,x): %f",result);
              break;
          }
          case 5:{
              printf("Enter no: ");
              double n = input();
              double result = cos(n);
              printf("cos(): %f",result);
              break;
          }

          default:
            printf("wrong input");
        }
int input(){
                int number;
                scanf("%d", &number);
                return (number);
              }
return 0;
}


