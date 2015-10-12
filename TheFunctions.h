#ifndef THE_FUNCTIONS_H_
#define THE_FUNCTIONS_H_

/* *Included libraries* */
#include <stdlib.h>
#include <stdio.h>

/* *Constant values* */
#define MAX_BUFFER 50
#define MEMORY_NAME "Mem_File.cmf"

/* *Global variables* */
FILE *InputFile;

/* *Structures with datas* */
typedef struct TheCodedMemory
{
	unsigned char *NameTable;
	char InputBuffer[MAX_BUFFER];
} TheMemory;

/* *The functions used to connect with memory file* */

/*Function:		OpenFile_Check - opens the output file and check for errors
 *Parameter:	InputFile - pointer to the file
 *Returns:		Status - variable which contains the boolean value of 1/0 if function worked correctly*/
int OpenFile_Check(FILE *InputFile);

/*Function:		WriteToFile - writes new memory coded into the file opened
 *Parameter:	InputFile - pointer to the file
 *Parameter:	Memory - structure with fields of the memory that have to be put*/
void WriteToFile(FILE *InputFile, TheMemory Memory);

#endif
