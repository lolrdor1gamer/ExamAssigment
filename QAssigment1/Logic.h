#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#pragma region Assigment1
void Assigment1();

int A1Start();
double A1EnterData(int inp);

void A1Func1(double x, double y);
void A1Func2(double x, double y);

#pragma endregion Assigment1

#pragma region Assigment2
void Assigment2();

int A2Start();
double A2EnterData(int inp);

void A2Func1(double x, double y);
void A2Func2(double x, double y);
bool A2Exit();

#pragma endregion Assigment2

#pragma region Assigment3
#define A3LENGTH 20

/*
struct intList
{
	int Number;
	struct intList* next;
};
*/
void Assigment3();
void A3Calculations(int lenght);
int A3Func(int x);

/*
void A3AddNode(struct intList* list, struct intList* node);
struct intList A3NewNode(int x);
*/

#pragma endregion Assigment3

#pragma region Assigment4

#define LENGTH 10

void createTextFile(const char* filename);
void readTextFile(const char* filename);

int Assigment4()
{
	// define the variables
	FILE* fp;
	char filename[] = { "poem.txt" };
	char buffer[255];

	// write the file
	fp = fopen(filename, "w");
	fprintf(fp, "Why is programming fun?\n");
	fprintf(fp, "What delights may its practitioner expect as his reward?\n");
	fprintf(fp, "First is the sheer joy of making things.\n");
	fprintf(fp, "As the child delights in his mud pie,\n");
	fprintf(fp, " so the adult enjoys building things,\n");
	fprintf(fp, " especially things of his own design.\n");
	fprintf(fp, "I think this delight must\n");
	fprintf(fp, " be an image of God's delight in making things,\n");
	fprintf(fp, " a delight shown in the distinctness and newness\n");
	fprintf(fp, " of each leaf and each snowflake.\n");
	fprintf(fp, "-- Frederick P. Brooks, Jr. from MythicalManMonth\n\n");
	fclose(fp);

	// open the file

	// read and print the (same) file
	while (!(feof(fp)))
	{
		//fread(&buffer)
		if(!(feof(fp)))
		{
			
		}
	}

	printf("Thank you, you were a great audience\n");
}
#pragma endregion Assigment4