// triangleAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int userInput = 0;

	do
	{
		printf("Enter First Number Between 1 & 50...: ");
		scanf_s("%i", &userInput);
		if (userInput < 1 || userInput > 50)
		{
			printf("**Can't Do That! Make Sure The Number Is Between 1 & 50**\n");
		}
	} while (userInput < 1 || userInput > 50);

	for (int variableOne = 1; variableOne <= userInput; ++variableOne)
	{
		for (int variableTwo = 1; variableTwo <= variableOne; ++variableTwo)
		{
			printf("* ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
