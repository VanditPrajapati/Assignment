//By: Vandit Prajapati
//C-Programming Assignment Q-1
//Menu Driven Program for depicting working of library

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Structure Library for storing the various parameters 
struct library
{
	int accession_number;
	char title_book[20];
	char author_name[20];
	int price_book;
	int flag;
};

int main()
{
	int op,c=1,book_count=0,a,f;
	char author[20];
	struct library l[50]; //Declaring an array of structure library variables for storing multiple book information
	while(c==1)
	{
		//Displaying Menu for library
		printf("\nEnter the choice:\n1.Add book information\n2.Display book information\n3.List all books of given author\n4.List the title of specified book\n5.List the count of books in the library\n6.List the books in the order of accession number\n7.Exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: // Adding Book Information
				l[book_count].accession_number=book_count+1;
				printf("\nEnter the title of book: ");
				scanf("%s",l[book_count].title_book);
				printf("Enter the author of book: ");
				scanf("%s",l[book_count].author_name);
				printf("Enter the price of book: ");
				scanf("%d",&l[book_count].price_book);
				l[book_count].flag=1;
				book_count++;
				break;
				
			case 2: // Dispalying the book information
				 printf("Enter the accession number of the book to be displayed: ");
				scanf("%d",&a);
				a--;
				printf("\nAccession Number of Book: %d ",l[a].accession_number);
				printf("\nTitle of Book: %s",l[a].title_book);
				printf("\nAuthor of Book: %s",l[a].author_name);
				printf("\nPrice of Book: %d",l[a].price_book);
				if(l[a].flag==0)
				{
					printf("\nBook is Issued");
				}
				else  
				{
					printf("\nBook is Available");
				}
				printf("\n\n");
				break;
				
			case 3: // Listing all books of given author
				printf("Enter the name of the author whose books are to be displayed: ");
				scanf("%s",author);
				for(int i=0;i<book_count;i++)
				{
					if(!(strcmp(author,l[i].author_name)))
					{
						printf("\nAccession Number of Book: %d ",l[i].accession_number);
						printf("\nTitle of Book: %s",l[i].title_book);
						printf("\nAuthor of Book: %s",l[i].author_name);
						printf("\nPrice of Book: %d",l[i].price_book);
						if(l[i].flag==0)
						{
							printf("\nBook is Issued");
						}
						else  
						{
							printf("\nBook is Available");
						}
						printf("\n\n");
					}
				}
				break;
			
			case 4: // Displaying title of book for given book
				printf("Enter the accession number of book whose title is to be printed: ");
				scanf("%d",&a);
				for(int i=0;i<book_count;i++)
				{
					if(a==l[i].accession_number)
					{
						printf("Title of book is: %s\n", l[i].title_book);
						f=1;
					}
				}
				if(f==0)
				{	
					printf("No book found\n");
				}
				break;
			
			case 5: // Displaying total number of books in library
				printf("Total number of books in library are: %d\n",book_count);
				break;
			
			case 6: // Listing all the books on basis of accession number
				for(int i=0;i<book_count;i++)
				{
					printf("\nAccession Number of Book: %d ",l[i].accession_number);
					printf("\nTitle of Book: %s",l[i].title_book);
					printf("\nAuthor of Book: %s",l[i].author_name);
					printf("\nPrice of Book: %d",l[i].price_book);
					if(l[i].flag==0)
					{
						printf("\nBook is Issued");
					}
					else  
					{
						printf("\nBook is Available");
					}
					printf("\n\n");	
				}
				break;	
			
			case 7: exit(0);
		}
		
		printf("Do you want to continue: 1(YES)/0(NO) ");
		scanf("%d",&c);
	}
}
