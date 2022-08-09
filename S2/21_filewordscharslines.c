/*
Open a text input file and count the number of characters, words and lines in it, and store the
results to an output file.
*/

#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int wc = 1, chc = 0, lc = 1;
    int f = 0;
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\nCheck file name\n");
        f = 1;
    }
    else
    {

        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == ' ' || ch == '.' || ch == '\n')
                wc++;
            if (ch == '\n')
                lc++;
            else if (ch != ' ')
                chc++;
        }
    }
    rewind(fp);
    if (f == 0)
    {
        printf("The file is:\n");
        while ((ch = fgetc(fp)) != EOF)
            printf("%c", ch);
        printf("\n");
        printf("\nTotal number of words = %d\n", wc);
        printf("Total number of lines = %d\n", lc);
        printf("Total number of characters = %d\n", chc);
    }
}
