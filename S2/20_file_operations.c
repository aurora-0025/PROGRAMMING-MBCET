/*
Program to create a file and do the following operations
1) write to file
2) read from file and display it in console
3) append data to file
*/

#include <stdio.h>
void main()
{
	FILE *fp;
	int isRunning = 1, choice;
	char str[100], ch;
	do
	{
		printf("\n\n1) To write to file\n");
		printf("2) To read from file\n");
		printf("3) To append to file\n");
		printf("4) To exit\n\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		getchar();
		switch(choice)
		{
			case 1:
				fp=fopen("file1.txt", "w");
				printf("Enter data to write to file: ");
				scanf("%[^$]s", str);
                                getchar();
				printf("Wrote data to file...\n");	
				fprintf(fp, "%s", str);
				fclose(fp);
				break;
			case 2:
				fp=fopen("file1.txt", "r");
				if(fp == NULL) {
					printf("There is no file to read please write data to file first");
					break;
				}
				printf("Read data from file...\n");
				while((ch=fgetc(fp))!=EOF) printf("%c", ch);
				printf("\n");
				fclose(fp);
				break;
			case 3:
				fp=fopen("file1.txt", "a");
				printf("Enter data to append to file: ");
				scanf("%[^$]s", str);
                                getchar();
				printf("Appended data to file...\n");
				fprintf(fp, "%s", str);
				fclose(fp);
				break;
			case 4:
				printf("Exiting Program");
				isRunning=0;
				break;
			default:
				printf("Invalid Input");
		}
	} while(isRunning);
}
