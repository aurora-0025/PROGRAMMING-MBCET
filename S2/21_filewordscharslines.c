/*
Open a text input file and count the number of characters, words and lines in it, and store the
results to an output file.
*/

#include <stdio.h>

void main()
{
	FILE *fp;
	char ch;
	int noWords=1, noLines=1, noChars=0;

	fp = fopen("input.txt", "r");
	if(fp == NULL) 
	{
		printf("File Not Found\n");
	}
	else {
		printf("Input file contents..\n");
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c", ch);
			if(ch == ' ') noWords++;
			else if(ch == '\n') noLines++;
			else noChars++;
		}
		printf("\n\n");
		fclose(fp);
    
    	printf("Writing output to output.txt\n");
    
    	fp = fopen("output.txt", "w");
    	fprintf(fp, "No of Words: %d\nNo of Lines: %d\nNo of Characters: %d", noWords, noLines, noChars); 
    	printf("No of Words: %d\nNo of Lines: %d\nNo of Characters: %d\n", noWords, noLines, noChars); 
    	fclose(fp);
    }

}
