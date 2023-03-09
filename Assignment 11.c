/*
DESCRIPTION: Programming Excerise Eleven
CLASS: COSC 1420.SO1
AUTHOR: TYLER ECHOLS
DATE: April 2019
*/
#pragma warning (disable:4996)

#include <conio.h>
#include <stdio.h>
#include "Complex.h"


int main()
{
	struct Complex	Num1;
	struct Complex	Num2;
	struct Complex	Result;


	printf("Num1 is \n");
	Num1 = Read();
	Display(Num1); 

	printf("Num2 is \n");
	Num2 = Read(); 
	Display(Num2); 

	printf("\n Answer for Addition: \n"); 
	Result = Add(Num1, Num2); 
	Display(Result); 

	printf("\n Answer for Subtraction: \n");
	Result = Sub(Num1, Num2);
	Display(Result);

	printf("\n Answer for Multiplication: \n");
	Result = Mul(Num1, Num2);
	Display(Result);

	printf("\n Answer for Division: \n");
	if (Num2.R == 0 && Num2.I == 0)
	{
		printf("Can't Divide by 0 \n");
	}
	else
	{
		Result = Div(Num1, Num2);
		Display(Result);
	}

	printf("Press Any Key to contuine"); 
	_getch(); 
	return 0; 
}