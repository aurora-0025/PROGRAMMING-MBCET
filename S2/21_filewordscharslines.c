/*
Open a text input file and count the number of characters, words and lines in it, and store the
results to an output file.
*/

#include <stdio.h>

void main()
{
	FILE *fp;
	char ch;
	int noWords = 0, noLines = 0, noChars = 0;

	fp = fopen("input.txt", "r");
	if (fp == NULL)
	{
		printf("File Not Found\n");
	}
	else
	{
		printf("Input file contents..\n");
		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
			noChars++;
			if (ch == '\n')
				noLines++;
			if (ch == ' ' || ch == '\t' || ch == '\n')
				noWords++;
		}
		if (noChars > 0)
		{
			noWords++;
			noLines++;
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
