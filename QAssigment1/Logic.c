#include "Logic.h"

#include <stdlib.h>


#pragma region Assigment1
void Assigment1()
{
	switch(A1Start())
	{
	case 1:
		A1Func1(A1EnterData(1), A1EnterData(2));
		break;
	case 2:
		A1Func2(A1EnterData(1), A1EnterData(2));
		break;
	default:
		break;
	}
	printf("Thank you for using calculator");
}

int A1Start()
{
	int inp;
	printf("Simple Les Torgovets's calculator\nPlease select a function(enter \'1\' or \'2\')\nFunction 1: Calculate y = 5x + 7a\nFunction 2: Calculate y = 7x + 7a\n\n");
	printf("Enter your selection: ");
	scanf(" %i", &inp);
	fflush(stdin);
	return inp;
}

double A1EnterData(int inp)
{
	double val;
	switch(inp)
	{
	case 1:
		printf("Please enter the value for x: ");
		scanf(" %lf", &val);
		break;
	case 2:
		printf("Please enter the value for a: ");
		scanf(" %lf", &val);
		break;
	default:
		break;

	}
	fflush(stdin);
	return val;

}

void A1Func1(double x, double y)
{
	printf("y = 5 * x + 7 * a is: %f", (5 * x + 7 * y));
}

void A1Func2(double x, double y)
{
	printf("y = 7 * x + 7 * a is: %f", (7 * x + 7 * y));
}
#pragma endregion Assigment1



#pragma region Assigment2
void Assigment2()
{
	bool isWorking = true;
	while(isWorking)
	{
		switch (A2Start())
		{
		case 1:
			A2Func1(A2EnterData(1), A2EnterData(2));
			break;
		case 2:
			A2Func2(A2EnterData(1), A2EnterData(2));
			break;
		case 0:
			isWorking = A2Exit();
			break;
		default:
			break;
		}
	}

	printf("Thank you for using calculator");
}

int A2Start()
{
	int inp;
	printf("Simple Les Torgovets's calculator\nPlease select a function(enter \'1\', \'2\' or \'0\')\nFunction 1: Calculate y = 5x + 7a\nFunction 2: Calculate y = 7x + 7a\nFunction 0: exit program\n\n");
	printf("Enter your selection: ");
	scanf(" %i", &inp);
	fflush(stdin);
	return inp;
}

double A2EnterData(int inp)
{
	double val;
	switch (inp)
	{
	case 1:
		printf("Please enter the value for x: ");
		scanf(" %lf", &val);
		break;
	case 2:
		printf("Please enter the value for a: ");
		scanf(" %lf", &val);
		break;
	default:
		break;

	}
	fflush(stdin);
	return val;
}

void A2Func1(double x, double y)
{
	printf("y = 5 * x + 7 * a is: %lf\n", (5 * x + 7 * y));
}

void A2Func2(double x, double y)
{
	printf("y = 7 * x + 7 * a is: %lf\n", (7 * x + 7 * y));
}

bool A2Exit()
{
	return false;
}

#pragma endregion Assigment2

#pragma region Assigment3
void Assigment3()
{
	printf("x\t3 * pow(x, 3) + 2\n");
	A3Calculations(A3LENGTH);
}

void A3Calculations(int lenght)
{

	int x = 0;

	while (++x < lenght)
	{
		printf("%i\t%u\n", x, A3Func(x));
	}
}

int A3Func(int x)
{
	return 3 * pow(x, 3) + 2;
}

/*
void A3AddNode(struct intList* list, struct intList* node)
{
	do
	{
		if (list->next == NULL)
			break;
		list = list->next;
	} while (true);

	list->next = node;
}

struct intList A3NewNode(int x)
{
	struct intList l;
	l.Number = x;
	l.next = NULL;
	return l;
}
*/
#pragma endregion Assigment3

#pragma region Assigment4


#pragma endregion Assigment4