// Implementation of Singly linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};


void main()
{
	struct Node *head=NULL, *ptr=NULL, *temp=NULL;

	int choice, isRunning = 1, item, ind, error=0;
	do
	{
		printf("\n\n======MENU=====\n");
		printf("1) Insert\n");
		printf("2) Delete\n");
		printf("3) Search\n");
		printf("4) Display\n");
		printf("5) Exit\n");
		printf("Enter Your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n\n======INSERT=====\n");
			printf("1) Beginning\n");
			printf("2) End\n");
			printf("3) To Index\n");
			printf("4) Go Back\n");
			printf("Enter where to enter data: ");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				ptr = (struct Node *)malloc(sizeof(struct Node));
				printf("Enter element to add: ");
				scanf("%d", &item);
				ptr->data = item;
				if(head == NULL)
				{
					ptr->next = NULL;
					head= ptr;
				}
				else {
					ptr->next = head;
					head = ptr;
				};
				printf("Inserted %d to the start of the linked list\n", ptr->data);
				break;
			case 2:
				ptr = (struct Node *)malloc(sizeof(struct Node));
				printf("Enter element to add: ");
				scanf("%d", &item);
				ptr->data = item;
				ptr->next = NULL;
				if(head == NULL)
				{
					head=ptr;
				}
				else {
					temp = head;
					while(temp->next!=NULL)
					{
						temp = temp->next;
					}
					temp->next=ptr;
					printf("Inserted %d to the end of the linked list\n", ptr->data);
				};
				break;
			case 3:
				ptr = (struct Node *)malloc(sizeof(struct Node));
				printf("Enter element to add: ");
				scanf("%d", &item);
				printf("Enter where to insert data: ");
				scanf("%d", &ind);
				ptr->data = item;
				if(head == NULL)
				{
					printf("Empty Linked List\n");
				}
				else {
					temp = head;
					for (int i = 1; i <= ind; i++)
					{
						if(temp->next == NULL && i!=ind) {
							error = 1;
							break;
						}
						if(temp->next != NULL)
						{
							temp = temp->next;
						}
					}
					if(error){
						printf("Index Out Of Bounds\n");
						error=0;
					}
					else
					{
						ptr->next = temp->next;
						temp->next = ptr;
						printf("Inserted %d to index %d of the linked list\n", ptr->data, ind);
					}
				};
				break;
			case 4:
				break;
			default:
				printf("Invalid Choice\n");
				break;
			}
			break;

		case 2:
			printf("\n\n======DELETE=====\n");
			printf("1) Beginning\n");
			printf("2) End\n");
			printf("3) Index\n");
			printf("4) Go Back\n");
			printf("Enter where to delete from: ");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				if(head == NULL)
				{
					printf("The Linked List Is Empty\n");
					break;
				}
				else {
					temp = head;
					head = head->next;
					printf("Removed %d from the start of the linked list\n", temp->data);
					free(temp);
				};
				break;
			case 2:
				if(head == NULL)
				{
					printf("The Linked List Is Empty\n");
				}
				else {
					temp = head;
					while(temp->next->next!=NULL)
					{
						temp = temp->next;
					}
					printf("Removed %d from the end of the linked list\n", temp->next->data);
					free(temp->next);
					temp->next=NULL;
				};
				break;
			case 3:
				printf("Enter where to delete data: ");
				scanf("%d", &ind);
				if(head == NULL)
				{
					printf("Empty Linked List\n");
				}
				else if(ind == 0)
				{
					temp = head;
					head = head->next;
					printf("Removed %d from index %d of the linked list\n", temp->data, ind);
					free(temp);
				}
				else {
					temp = head;
					struct Node *t = NULL;
					for (int i = 1; i <= ind; i++)
					{
						if(temp->next == NULL) {
							error = 1;
							break;
						}
						temp = temp->next;
					}
					if(error)
					{
						printf("Index Out Of Bounds!\n");
						error=0;
						break;
					}
					else
					{
						t = temp->next;
						temp->next = t->next;
						printf("Removed %d from index %d of the linked list\n", t->data, ind);
						free(t);	
					}	
				};
				ptr = NULL;
				break;
			case 4:
				break;
			default:
				printf("Invalid Choice\n");
				break;
			}
			break;
		case 3:
			printf("\n\n======SEARCH=====\n");
			printf("Enter element to search for: ");
			scanf("%d", &item);
			ind = 0;
			int isFound = 0;
			if(head==NULL)
			{
				printf("Empty Linked List\n");
				break;
			}
			else
			{	
				temp = head;
				while(temp != NULL)
				{
					if(temp->data == item)
					{
						isFound = 1;
						break;
					} 
					ind++;
					temp = temp->next;
				}
				if(isFound) printf("Element %d Found at Index %d\n", item, ind);
				else printf("Element not found\n");
				break;
			}

		case 4:
			printf("\n\n======DISPLAY=====");
			if(head==NULL)
			{
				printf("Empty Linked List\n");
			}
			else {
				temp=head;
				printf("\nLinked List: ");
				while (temp!=NULL)
				{
					printf("%d ", temp->data);
					temp = temp->next;
				}
				printf("\n");
			}
			break;

		case 5:
			printf("...Exiting the program!...\n");
			isRunning = 0;
			break;

		default:
			printf("Invalid Input\n");
			break;
		}
	} while (isRunning);
	free(ptr);
}
