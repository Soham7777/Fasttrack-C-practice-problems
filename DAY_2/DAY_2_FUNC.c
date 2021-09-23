#include "DAY_2.h"
#include <stdio.h>
#include <math.h>
#include <conio.h>
//1. Enter a 5 digit number and find the sum of its digits. For E.g. if int number = 12345; then sum = 15;

 int sum_of_five_digits(int input)
{
    int sum;

    for(sum = 0; input != 0; input = input / 10)
        sum = sum + input % 10;

    return sum;
}


//2. Write a program to reverse the number. For E.g. If int number = 12345; then the output reverse = 54321;

 int reverse_of_array(int n){

      int rev = 0,remainder;

       while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10; //dividing n by 10 and storing it as n again
       }

    return rev;
}


//3. Write a program to count the occurrences of digit in a number.

int find_Occurrence_digit(int num,int dig)
{
    int rem, count;

    count=0;
    while(num>0)
    {
        rem=num%10; // to get the last digit from the number
        if(rem==dig)
            count++; // incrementing the count as we get similar number
        num/=10; // removing the last digit
    }
    return count;
}


//4. WAP to check if a given number is a palindrome. For e.g. 12321, 56788765;

int check_palindrome(int number)
{
  int temp, remainder, rev=0;

  temp = number; // copy of original number to compare further

  while( number!=0 )
  {

     remainder = number % 10; // finding last digit

     rev = rev*10 + remainder;

     number /= 10;  // remove last digit
  }

  if ( rev == temp )
    return 1; //palindrome
  else
  return 0; // not a palindrome
}


// 5.Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11

int prime_numbers()
{
   int n,i = 3, count, c;

   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);

   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }

   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n",i);
         count++;
      }
      i++;
   }
   return 0;
   }


/*6. Write a C program to display and find the sum of the series 1+11+111+....111 up to n.
For eg. if n=4, the series is: 1+11+111+1111. Take the value of 'n' as input from the user */

void sum_of_series()
{
  int n,i;
  long int t=1;

  printf("Input the number: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
     printf("%ld  ",t); // l for long int
      if (i<n)
      {
          printf("+ ");

      }
     t=(t*10)+1; //changing t to get the series
  }
}

/* 7. A number is called an Armstrong number if the sum of the cubes
of the digits of the number is equal to the number.
For example 153 = 1^3 + 5^3 + 3^3.
Write a C program that asks the user to enter a number and returns if it is Armstrong or not. */

int armstrong_number(int n){
int r,sum=0,temp;
//printf("enter the number=");
//scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
    if(temp==sum)
        return 1;    //armstrong number
    else    // Not an armstrong number
        return 0;
}

/*9. Write a menu driven program to read two
   integers & find their sum, difference & product */

int sum_diff_product(signed int a,signed int b){

signed int sum,diff,prod;
int option;

printf("Enter the character \n 0 -> to find sum \n 1 -> to find difference \n 2 -> to find the product \n ");
scanf("%d",&option);

switch(option){

        case 0: {
         sum= a + b;
         printf("the sum of the two numbers is %d \n",sum);
         break;
         }

        case 1: {
         diff= a - b;
         printf("the sum of the two numbers is %d \n",diff);
         break;
         }

        case 2: {
         prod= a*b;
         printf("the sum of the two numbers is %d \n",prod);
         break;
         }
  }
return 0;
}

/* 10.Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone.
Ask the user which one s/he wants to calculate, and take the appropriate required inputs.
Then print the result. The input should be taken in the main function and calculations for every solid should be done
in a separate function by passing appropriate arguments */

int volume_of_shapes(int key){

     //int q;
     float result;

 float cube()
 {
  float a;
  float V;
  printf("Enter value of side\n");
  scanf("%f",&a);
  V=a*a*a;
  return V;
 }
 float cuboid()
 {
  float l,b,h;
  float V;
  printf("Enter length,breadth & hight of cuboid\n");
  scanf("%f%f%f",&l,&b,&h);

  V=l*b*h;
  return V;
 }
 float cylinder()
 {
  float r,h;
  float V;
  printf("Enter radius & hight of cylender\n");
  scanf("%f%f",&r,&h);
  V=3.14*r*r*h;
  return V;
 }
 float sphere()
 {
  float r;
  float V;
  printf("Enter radius of sphere\n");
 scanf("%f",&r);
  V=(4*3.14*r*r*r)/3;
  return V;
 }
 float cone()
 {
  float r,h;
  float V;
  printf("Enter radius & hight of cone\n");
  scanf("%f%f",&r,&h);
  V=(3.14*r*r*h)/3;
  return V;
 }
 float display(float V)
 {
  printf("Volume is = %f\n",V);
  return 0;
 }

 while(1)
 {
  printf("Select the shape for calculate volume\n");
  printf("Press 1 for select CUBE\n");
  printf("Press 2 for select CUBOID\n");
  printf("Press 3 for select CYLINDER\n");
  printf("Press 4 for select SPHERE\n");
  printf("Press 5 for select CONE\n");
  scanf("%d",&key);

   switch(key)
     {
         case 1: result=cube();
                break;
         case 2: result=cuboid();
                break;
         case 3: result=cylinder();
                break;
         case 4: result=sphere();
                break;
         case 5: result=cone();
                break;

     }
   display(result);
 }
return 0;
}


/*11. An Electricity board charges the following rates for use of electricity.
For the First 200 units : Rs 1 per unit
For the next 100 units : Rs 1.5 per unit
Beyond 300 units : Rs 2 Per unit.
Write a C Program to read no of unit consumed and print out total charge amount*/

float charges_elec_func(float unit){
//commenting out printf statements for assertion.
float price;

/*printf("\nEnter units of electricity used:");
scanf("%f",&unit);*/

    if(unit<=200)
    {
    price=(1.00*unit);
    //printf("\nUnits = %.2f  Rate = 1 rs /unit for <= 200 charges = %.2f",unit,price); // %.2f to limit the decimals upto 2
    return price;
    }

    else if(unit>200 && unit<=300)
    {
    price=(1.5*unit);

    //printf("\nUnits = %.2f  Rate = 1.5 rs/unit for between 200 units and 300 units charges = %.2f",unit,price);
    return price;
    }

    else if(unit>300)
    {
    price = unit*2.00 ;
    //printf("\nUnits = %.2f  Rate = 2 rupees/unit price for >300 charges = %.2f",unit,price);
    return price;
    }
//getch();
return 0;
}



