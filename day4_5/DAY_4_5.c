#include "DAY_4_5.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


// 1. WAP to sort the given array in ascending and descending order.

void asc_desc(){

int a[50], i, j, n, p, q, temp, temp2; // initialization of variables

printf("Enter array size \n"); // getting the size of array
scanf("%d",&n);

printf("Enter array elements \n");
 for(i=0;i<n;i++){
    scanf("%d",&a[i]); // appending the elements to the array
    }
 for(i=0;i<n;i++){   /*creating nested for loops to check the array elements one by one
                        and comparing with the previous element and then sorting
                        accordingly for ascending order */

       for(j=i+1;j<n;j++){
            if(a[i]>a[j]){ // comparing and replacing if the condition satisfies
                temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
                 }
        }
 }

 printf("Ascending order: \n"); // creating for loop for displaying the sorted elements
 for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }

// Loops for descending order

for(p=0;p<n;p++)
    {
        for(q=p+1;q<n;q++)
        {
            if(a[p]<a[q])
            {
                temp2 = a[p];
                a[p] = a[q];
                a[q] = temp2;
            }
        }
    }
    printf("\nDescending order: \n");
    for(p=0;p<n;p++)
    {
        printf("%d ",a[p]);
    }
}



// 2. Write a program to swap two numbers using function


void swap(int*, int*);

int swap_def()
{
    int a, b;

    printf("Enter values for a and b\n");
    scanf("%d%d", &a, &b);

    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);

    swap(&a, &b);

    printf("\nAfter swapping: a = %d and b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x   = *y;
    *y   = temp;

}


/* 3. WAP to find minimum and maximum elements in a given array using the
function int find_max_min(int array[], int size, int *max, int *min); */


void max_min(int num[],int length,int *max,int *min)
{
    int k;


    for(k=0;k<length-1;k++)
    {
        if(num[k]>*max)
            *max=num[k];
            else if(num[k]<*min)
                *min=num[k];
    }
}


int MIN_MAX()
{
    int len;
    int num[len];
    int i,max,min;
    printf("How many numbers do you wanna input ?");
    scanf("%d",&len);
    printf("\nEnter %d numbers to find the biggest and smallest",len);

    for(i=0;i<len-1;i++)
    {
        scanf("%d",&num[i]);
    }

    max_min(num,len,&max,&min);

    printf("\n Biggest number :%d",max);
    printf("\n Smallest number :%d",min);

    return 0;
}





// 5. WAP to store 10 numbers in an array. Remove the duplicate entries in the array.


int remove_duplicates(){
	int arr[10], i, j, k, Size = 10;

	//printf("\n Please Enter Number of elements in an array  :   ");
	//scanf("%d", &Size);

	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < Size; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				Size--;
				j--;
			}
		}
	}

 	printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
 	for (i = 0; i < Size; i++)
  	{
 		printf("%d\t", arr[i]);
  	}

return 0;
}



// 6. WAP to search for a given integer in an array using the linear search technique.



void search_integer(){

   int array[50], search, i, n;

   printf("Enter the number of elements in array\n");
   scanf("%d",&n);

   printf("Enter integers:\n");

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the number to search\n");
   scanf("%d", &search);

   for (i = 0; i < n; i++)
   {
      if (array[i] == search)     /* if required element found */
      {
         printf("\n %d is present in the array \n", search);
         break;
      }
   }
   if (i == n){

      printf("%d is not present in array.\n", search);
   }
}
