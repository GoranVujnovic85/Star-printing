/*
Author : Goran Vujnovic
Project Name : Practice
Date created : 18/09/2023
Description :Program that prints stars based on number input.
*/

// Included the headers.
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>


// Main function.
int main()
{
	int number;

 	printf("Enter the number from 2 to 15 : ");
	fflush(stdout);
        scanf("%d",&number);

    if(number < 2 || number > 15)
    {
    	printf("You have entered a number that is outside the required range!\n");

    	return 1;
    }
    else
    {
    	printf("\n");
    	printf("N = %d;", number);
    	printf("\n\n");

    	for (int i = 0; i < number-1; i++)
    	{
    		for(int k = 0; k < number - i; k++)
    		{
    			printf("%c", 32);
    		}
    		for(int j = 0; j <= i; j++)
    		{
    			printf("* ");
    		}
    		printf("\n");
    	}

    	for(int i = number-1; i >= 0; i--)
    	{
    		for(int k = 0; k < number - i; k++)
    		{
    			printf("%c", 32);
    		}
    		for(int j = 0; j <= i; j++)
    		{
    			printf("* ");
    		}
    		printf("\n");
    	}

     }
 }


