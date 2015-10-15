#include "TheFunctions.h"

int OpenFile_Check(FILE *InputFile)
{
	int Status = 0;						/*As for now, status is 0 - opening failed*/

	InputFile = fopen(MEMORY_NAME, "w");
	if(InputFile == NULL)
	{
		printf("Opening failed!\n");
		return Status;
	}
	else
	{
		printf("File succesfully opened... Ready to write...\n");
		Status++;
		return Status;
	}
}


void WriteToFile(FILE *OutputFile, TheMemory Memory)
{
