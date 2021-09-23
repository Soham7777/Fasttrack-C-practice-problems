#include "DAY1_header.h"
#include <stdio.h>
#include<math.h>


//1. Write a program that converts upper case to lower.

char Uppercase_to_lowercase()
{
    char s[1000];
    int i;

    printf("Enter  the string : ");
    gets(s);

    for(i=0;s[i];i++)
    {
        if(s[i]>=65 && s[i]<=90)
         s[i]+=32;
 	}

    printf("string in lowercase ='%s'\n",s);


    return 0;
}


//2. Write a program to calculate the area of circle.

int area_of_circle()

    {
  int radius;
  float pi =3.141, area;
  printf("Input the radius:");
  scanf("%d",&radius);
  area = pi*radius*radius;
  printf("\n Area of circle= %f", area);
  return 0;
}

//3. Write a program to calculate simple and compound interest

  //SIMPLE INTEREST

int simple_interest()
{
  int amount, rate, time, si;
  printf("\nEnter Principal Amount : ");
  scanf("%d", &amount);
  printf("\nEnter Rate of Interest : ");
  scanf("%d", &rate);
  printf("\nEnter Period of Time  : ");
  scanf("%d", &time);
  si = (amount * rate * time) / 100; //calculating the simple interest
  printf("\nSimple Interest : %d", si);
  return(0);

}

  //COMPOUND INTEREST

float compound_interest()
      {
 float principal, rate, year, ci;
 printf("Enter principal: ");
 scanf("%f", &principal);
 printf("Enter rate: ");
 scanf("%f", &rate);
 printf("Enter time in years: ");
 scanf("%f", &year);
 //calculating the compound interest
 ci=principal*((pow((1+rate/100),year)-1)); //using the pow function to calculate the power raised to the base value
 printf("Compound interest is: %f\n",ci);
 return 0;
}


//4. Write a program to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius

 //celisuis to fahrenheit function

int celsius_to_fahrenheit()
{

    float celsius, fahrenheit;

    /* Input temperature in celsius */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit); //limiting the decimals by .2f

    return 0;
}

   //fahrenhiet to celsius

int fahrenheit_to_celsius()
{
  float Fahrenheit, Celsius;

  printf("Enter temperature in fahrenhiet: ");
  scanf("%f", &Fahrenheit);

  Celsius = ((Fahrenheit-32)*5)/9; //calcualting by formula

  printf("\n\n Temperature in Celsius is : %f",Celsius);
  return (0);

}

//5. Check if entered number is even or odd.

 int is_even_or_odd(int number)
{
    if(number % 2 == 0)
        return 1;
    else
        return 0;
}

//6. Check if entered year is leap year or not.
int leapyear_or_not(int yr)
{
  if (yr%4 == 0) {

      if(yr%100 == 0) {

          if(yr%400 == 0)
             return 1; //its a leap year
          else
             return 0; //not a leap year
           }

      else {
             return 1; //leap year
           }
  }
  else{
    return 0; //Not a leap year
  }
}


// 7. WAP to find power of 2^N using left shift operator.


