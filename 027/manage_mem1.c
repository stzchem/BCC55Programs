#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[100];
	char *description;
	//description=NULL;
	
	strcpy(name, "Zara Ali");
	
	description=(char*)calloc(200, sizeof(char)); //description=(char*)mal(200*sizeof(char)0;
	if(description==NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcpy(description, "Zara Ali a DPS student in class 10th");
	}
	
	printf("Name = %s\n", name);
	printf("Description: %s\n", description);
	
	free(description);
	
	return 0;
}