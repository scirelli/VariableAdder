#include <iostream.h>
#include <string.h>

int TestForInt(int &, char *);
void OutPut(int, int, int, char *);

void CheckForVariables(char * program)
{
	int i=0;
	int numberOfInteger=0, totIntMem=0;

	while( program[i] != NULL)
	{
		switch(program[i])
		{
		case 'i' :	numberOfInteger += TestForInt(i, program); break;
		
		}

		i++;
	}
	
	totIntMem= numberOfInteger * sizeof(int);
	
	OutPut(totIntMem, numberOfInteger, sizeof(int), "int");
	
	return;
}